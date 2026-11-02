// rea decompile_all
// name: FUN_10026c8e
// address: 0x10026c8e
// body: available
// range: 0x10026c8e-0x10026d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_10026c8e(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  ulonglong uVar6;
  ulonglong uVar7;
  
  dVar3 = _DAT_10166c7c;
  puVar5 = &DAT_101603f4;
  if (DAT_1016040c != -1) {
    puVar5 = &DAT_1016040c;
  }
  dVar2 = 1.0;
  uVar1 = puVar5[1];
  *param_3 = *puVar5;
  iVar4 = DAT_10166c84;
  param_3[1] = uVar1;
  if (iVar4 != 0) {
    dVar2 = dVar3;
  }
  if (dVar2 != 1.0) {
    uVar6 = FUN_100f8660(iVar4,param_2);
    uVar7 = FUN_100f8660(extraout_ECX,(int)(uVar6 >> 0x20));
    param_2 = (undefined4)(uVar7 >> 0x20);
    *param_3 = (int)uVar6;
    param_3[1] = (int)uVar7;
  }
  return CONCAT44(param_2,param_3);
}

