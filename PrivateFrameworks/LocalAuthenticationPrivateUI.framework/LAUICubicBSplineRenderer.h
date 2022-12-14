/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUICubicBSplineRenderer : NSObject {
    struct vector<LAUI_uniform_cubic_b_spline_renderer::global_state, std::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state>> { 
        struct global_state {} *__begin_; 
        struct global_state {} *__end_; 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::global_state *, std::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state>> { 
            struct global_state {} *__value_; 
        } __end_cap_; 
    }  _animation_targets;
    struct vector<unsigned short, std::allocator<unsigned short>> { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { 
            unsigned short *__value_; 
        } __end_cap_; 
    }  _cap_control_point_indices;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> { 
        struct control_point {} *__begin_; 
        struct control_point {} *__end_; 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::control_point *, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> { 
            struct control_point {} *__value_; 
        } __end_cap_; 
    }  _cap_control_points;
    bool  _caps_dirty;
    MTLRenderPassDescriptor * _clear_pass_descriptor;
    <MTLCommandQueue> * _command_queue;
    struct animation_completion_handler_container { 
        id /* block */ _completion; 
    }  _completion_container;
    struct vector<unsigned short, std::allocator<unsigned short>> { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { 
            unsigned short *__value_; 
        } __end_cap_; 
    }  _control_point_indices;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> { 
        struct control_point {} *__begin_; 
        struct control_point {} *__end_; 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::control_point *, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> { 
            struct control_point {} *__value_; 
        } __end_cap_; 
    }  _control_points;
    unsigned long long  _current_animation_target_index;
    <MTLTexture> * _depth_stencil_texture;
    unsigned long long  _drawable_height;
    unsigned long long  _drawable_width;
    unsigned long long  _frame_index;
    struct global_state_animator { 
        struct animator<float, 0> { 
            float _target; 
            float _intermediate; 
            float _actual; 
            float _k; 
            float _elapsed_n; 
            float _target_n; 
            float _visual_target_n; 
            unsigned char _interpolation; 
        } accumulator_growth; 
        struct animator<float, 0> { 
            float _target; 
            float _intermediate; 
            float _actual; 
            float _k; 
            float _elapsed_n; 
            float _target_n; 
            float _visual_target_n; 
            unsigned char _interpolation; 
        } accumulator_persistence; 
        struct animator<float, 0> { 
            float _target; 
            float _intermediate; 
            float _actual; 
            float _k; 
            float _elapsed_n; 
            float _target_n; 
            float _visual_target_n; 
            unsigned char _interpolation; 
        } accumulator_luminance_alpha_factor; 
        struct animator<float, 0> { 
            float _target; 
            float _intermediate; 
            float _actual; 
            float _k; 
            float _elapsed_n; 
            float _target_n; 
            float _visual_target_n; 
            unsigned char _interpolation; 
        } blur_scale; 
        struct animator<std::nullptr_t, 0> { 
            char *_target; 
            char *_intermediate; 
            char *_actual; 
            float _k; 
            float _elapsed_n; 
            float _target_n; 
            float _visual_target_n; 
            unsigned char _interpolation; 
        } hidden_animator; 
    }  _global_state_animator;
    unsigned long long  _instance_count;
    struct vector<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>, std::allocator<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance> *, std::allocator<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _instance_state;
    double  _last_render_time;
    struct double4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _model_transform;
    <MTLTexture> * _multisample_texture;
    bool  _needs_update;
    struct double4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _projection_transform;
    LAUIMetalRenderLoop * _render_loop;
    MTLRenderPassDescriptor * _render_pass_descriptor;
    bool  _reversed;
    struct vector<(anonymous namespace)::buffer_group, std::allocator<(anonymous namespace)::buffer_group>>="__begin_"^{buffer_group {}  _ring_buffer;
    struct atomic<unsigned char> { 
        struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
            _Atomic unsigned char __a_value; 
        } __a_; 
    }  _ring_end;
    struct atomic<unsigned char> { 
        struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
            _Atomic unsigned char __a_value; 
        } __a_; 
    }  _ring_start;
    struct renderer_shared_state { 
        <MTLDevice> *device; 
        <MTLDepthStencilState> *depth_stencil_state; 
        <MTLComputePipelineState> *tesselation_factor_pipeline; 
        <MTLRenderPipelineState> *tube_pipeline; 
        struct array<id<MTLRenderPipelineState>, 3UL> { 
            <MTLRenderPipelineState> *__elems_[3]; 
        } begin_cap_pipelines; 
        struct array<id<MTLRenderPipelineState>, 3UL> { 
            <MTLRenderPipelineState> *__elems_[3]; 
        } end_cap_pipelines; 
        <MTLComputePipelineState> *horizontal_blur_pipeline; 
        <MTLComputePipelineState> *vertical_blur_pipeline; 
        <MTLComputePipelineState> *accumulator_pipeline; 
    }  _shared_render_state;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform>> { 
        struct instance_uniform {} *__begin_; 
        struct instance_uniform {} *__end_; 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform *, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform>> { 
            struct instance_uniform {} *__value_; 
        } __end_cap_; 
    }  _spline_instance_uniforms;
    struct vector<LAUI_uniform_cubic_b_spline_renderer::spline, std::allocator<LAUI_uniform_cubic_b_spline_renderer::spline>> { 
        struct spline {} *__begin_; 
        struct spline {} *__end_; 
        struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline *, std::allocator<LAUI_uniform_cubic_b_spline_renderer::spline>> { 
            struct spline {} *__value_; 
        } __end_cap_; 
    }  _spline_state;
    <MTLBuffer> * _tesselation_factors;
    unsigned long long  _texture_index;
    struct array<id<MTLTexture>, 2UL> { 
        <MTLTexture> *__elems_[2]; 
    }  _textures;
    bool  _textures_dirty;
    struct double4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _view_transform;
    bool  _wireframe_enabled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
