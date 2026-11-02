// rea decompile_all
// name: FUN_005009c3
// address: 0x5009c3
// body: available
// range: 0x5009c3-0x500a2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int * FUN_005009c3(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStackY_28;
  undefined1 auStack_20 [24];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar4 = (undefined4 *)auStack_20;
  local_8 = 1;
  if ((HGLRC)param_1[2] != (HGLRC)0x0) {
    puVar4 = &uStackY_28;
    uStackY_28 = 0x5009e7;
    wglDeleteContext((HGLRC)param_1[2]);
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[1];
  *(int *)((int)puVar4 + -4) = param_1[3];
  pcVar2 = *(code **)(*piVar1 + 4);
  puVar5 = (undefined4 *)((int)puVar4 + -8);
  *(undefined4 *)((int)puVar4 + -8) = 0x5009f6;
  uVar3 = (*pcVar2)();
  puVar5[-1] = uVar3;
  puVar6 = puVar5 + -2;
  puVar5[-2] = 0x5009fd;
  ReleaseDC((HWND)puVar5[-1],(HDC)*puVar5);
  local_8 = local_8 & 0xffffff00;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)param_1[1];
    *(undefined4 *)((int)puVar6 + -4) = 1;
    pcVar2 = (code *)*puVar4;
    puVar7 = (undefined4 *)((int)puVar6 + -8);
    puVar6 = (undefined4 *)((int)puVar6 + -8);
    *puVar7 = 0x500a0e;
    (*pcVar2)();
  }
  local_8 = 0xffffffff;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)*param_1;
    *(undefined4 *)((int)puVar6 + -4) = 1;
    pcVar2 = (code *)*puVar4;
    puVar8 = (undefined4 *)((int)puVar6 + -8);
    puVar6 = (undefined4 *)((int)puVar6 + -8);
    *puVar8 = 0x500a1e;
    (*pcVar2)();
  }
  *(int **)((int)puVar6 + -4) = param_1;
  *(undefined4 *)((int)puVar6 + -8) = 0x500a24;
  FUN_005af7b6();
  *(undefined4 *)((int)puVar6 + -4) = 0x500a2c;
  return param_1;
}

