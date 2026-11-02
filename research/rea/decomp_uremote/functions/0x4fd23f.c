// rea decompile_all
// name: FUN_004fd23f
// address: 0x4fd23f
// body: available
// range: 0x4fd23f-0x4fd2bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fd23f(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  HWND hWnd;
  HDC pHVar6;
  undefined4 *unaff_EDI;
  undefined1 auStack_18 [20];
  
  thunk_FUN_004c1265();
  uVar1 = *unaff_EDI;
  uVar3 = FUN_004c01a3();
  puVar4 = (undefined4 *)FUN_004f4b12(uVar1,uVar3);
  puVar2 = (undefined4 *)unaff_EDI[1];
  if ((puVar2 != puVar4) && (unaff_EDI[1] = puVar4, puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  iVar5 = FUN_004c0453();
  if (iVar5 != 0) {
    FUN_004eddd8(auStack_18,param_1);
    FUN_004fd1ff();
  }
  (**(code **)(*(int *)unaff_EDI[1] + 8))(1);
  hWnd = (HWND)(**(code **)(*(int *)unaff_EDI[1] + 4))();
  pHVar6 = GetDC(hWnd);
  unaff_EDI[3] = pHVar6;
  return;
}

