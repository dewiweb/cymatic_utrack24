// rea decompile_all
// name: FUN_004e01f4
// address: 0x4e01f4
// body: available
// range: 0x4e01f4-0x4e027c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 * FUN_004e01f4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *unaff_EDI;
  undefined4 *puStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4e0200;
  *param_1 = *unaff_EDI;
  puStack_24 = unaff_EDI + 1;
  FUN_004652e4();
  ppuVar3 = (undefined4 **)auStack_20;
  local_8 = 0;
  puStack_24 = (undefined4 *)0x4e0222;
  FUN_004d076d();
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(unaff_EDI + 3);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)unaff_EDI + 0xd);
  *(undefined1 *)((int)param_1 + 0xe) = *(undefined1 *)((int)unaff_EDI + 0xe);
  *(undefined1 *)((int)param_1 + 0xf) = *(undefined1 *)((int)unaff_EDI + 0xf);
  if ((int *)unaff_EDI[4] == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar3 = &puStack_24;
    puStack_24 = (undefined4 *)0x4e0249;
    uVar2 = (**(code **)(*(int *)unaff_EDI[4] + 0xb0))();
  }
  param_1[4] = uVar2;
  iVar1 = unaff_EDI[5];
  param_1[5] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x74) = *(int *)(iVar1 + 0x74) + 1;
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)((int)ppuVar3 + -4) = unaff_EDI[6];
  *(undefined4 *)((int)ppuVar3 + -8) = 0x4e0269;
  uVar2 = FUN_004f8acd();
  param_1[6] = uVar2;
  param_1[7] = unaff_EDI[7];
  *(undefined4 *)((int)ppuVar3 + -4) = 0x4e027a;
  return param_1;
}

