// rea decompile_all
// name: FUN_00461010
// address: 0x461010
// body: available
// range: 0x461010-0x4610dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461010(undefined4 **param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  undefined4 *puVar7;
  undefined4 *local_24;
  void *local_20;
  undefined4 local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  ppuVar3 = param_1;
  puStack_c = &LAB_00700ae8;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX != (undefined4 *)0x0) {
    LOCK();
    in_ECX[1] = in_ECX[1] + 1;
    UNLOCK();
  }
  local_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  puVar7 = in_ECX;
  local_24 = in_ECX;
  if (in_ECX != (undefined4 *)0x0) {
    do {
      FUN_004628f0(in_ECX,&local_24,ppuVar3);
      puVar4 = local_24;
      piVar1 = puVar7 + 0xc;
      in_ECX = extraout_ECX;
      puVar7 = (undefined4 *)*piVar1;
    } while ((undefined4 *)*piVar1 != (undefined4 *)0x0);
    if ((0 < local_18) && (local_24 != (undefined4 *)0x0)) {
      param_1 = &local_24;
      uVar6 = FUN_00447770(&param_1);
      if (uVar6 < (uint)puVar4[0xb]) {
        FUN_00410320(uVar6);
      }
    }
  }
  FID_conflict__free(local_20);
  if (local_24 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_24 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_24)(1,uVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

