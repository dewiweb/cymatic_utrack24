// rea decompile_all
// name: FUN_00542e40
// address: 0x542e40
// body: available
// range: 0x542e40-0x542f00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00542e40(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  void **ppvVar5;
  int in_ECX;
  byte bVar6;
  int iVar7;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070eb18;
  local_10 = ExceptionList;
  ppvVar5 = &local_10;
  ExceptionList = ppvVar5;
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar7 = 0;
    bVar6 = 1;
    if (0 < *(int *)(in_ECX + 0x18)) {
      do {
        FUN_004110e0(&local_14,iVar7);
        local_8 = 0;
        bVar3 = FUN_00542e40(param_1);
        local_8 = 0xffffffff;
        bVar6 = bVar6 & bVar3;
        if (local_14 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_14 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_14)(1);
          }
        }
        iVar7 = iVar7 + 1;
        ppvVar5 = (void **)(in_ECX + 0x10);
      } while (iVar7 < *(int *)(in_ECX + 0x18));
    }
    ExceptionList = local_10;
    return CONCAT31((int3)((uint)ppvVar5 >> 8),bVar6);
  }
  uVar4 = FUN_005b48e0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  uVar4 = FUN_00540440(uVar4,param_1);
  ExceptionList = local_10;
  return uVar4;
}

