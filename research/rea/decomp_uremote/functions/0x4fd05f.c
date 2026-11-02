// rea decompile_all
// name: FUN_004fd05f
// address: 0x4fd05f
// body: available
// range: 0x4fd05f-0x4fd1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004fd05f(int *param_1,undefined4 param_2,undefined4 param_3,HGLRC param_4)

{
  undefined4 *puVar1;
  int iVar2;
  HGLRC pHVar3;
  int iVar4;
  HWND hWnd;
  BOOL BVar5;
  undefined4 uVar6;
  undefined4 *extraout_EDX;
  undefined4 *puVar7;
  HDC hDC;
  PIXELFORMATDESCRIPTOR local_3c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  *param_1 = 0;
  param_1[1] = 0;
  local_8 = 1;
  param_1[4] = 0;
  iVar2 = FUN_005af82d(0x74);
  if (iVar2 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_004bfd7b();
    *extraout_EDX = juce::OpenGLContext::NativeContext::DummyComponent::vftable;
    extraout_EDX[0x1c] = param_1;
    puVar7 = extraout_EDX;
  }
  puVar1 = (undefined4 *)*param_1;
  if ((puVar1 != puVar7) && (*param_1 = (int)puVar7, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  FUN_004fd23f(param_2);
  FUN_004fd2bd();
  iVar2 = ChoosePixelFormat((HDC)param_1[3],&local_3c);
  if (iVar2 != 0) {
    SetPixelFormat((HDC)param_1[3],iVar2,&local_3c);
  }
  pHVar3 = wglCreateContext((HDC)param_1[3]);
  param_1[2] = (int)pHVar3;
  if (pHVar3 != (HGLRC)0x0) {
    FUN_004fd1dc();
    iVar4 = FUN_004fc67b("wglChoosePixelFormatARB");
    param_1[5] = iVar4;
    iVar4 = FUN_004fc67b("wglSwapIntervalEXT");
    param_1[6] = iVar4;
    iVar4 = FUN_004fc67b("wglGetSwapIntervalEXT");
    param_1[7] = iVar4;
    iVar4 = FUN_004fd33c(param_1);
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if ((iVar4 != iVar2) && (iVar4 != 0)) {
      hDC = (HDC)param_1[3];
      hWnd = (HWND)(**(code **)(*(int *)param_1[1] + 4))();
      ReleaseDC(hWnd,hDC);
      puVar7 = (undefined4 *)param_1[1];
      if ((puVar7 != (undefined4 *)0x0) && (param_1[1] = 0, puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
      FUN_004fd23f(param_2);
      BVar5 = SetPixelFormat((HDC)param_1[3],iVar4,&local_3c);
      if (BVar5 != 0) {
        if ((HGLRC)param_1[2] != (HGLRC)0x0) {
          wglDeleteContext((HGLRC)param_1[2]);
          param_1[2] = 0;
        }
        pHVar3 = wglCreateContext((HDC)param_1[3]);
        param_1[2] = (int)pHVar3;
      }
    }
    if (param_4 != (HGLRC)0x0) {
      wglShareLists(param_4,(HGLRC)param_1[2]);
    }
    uVar6 = thunk_FUN_004c1265();
    FUN_004c1613(uVar6);
    FUN_004c1613(param_2);
  }
  return param_1;
}

