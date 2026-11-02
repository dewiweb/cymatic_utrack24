// rea decompile_all
// name: FUN_006ea4c0
// address: 0x6ea4c0
// body: available
// range: 0x6ea4c0-0x6ea5cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ea4c0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_30 = (int *)0x0;
  local_18 = 0x112;
  uStack_14 = 0;
  uStack_10 = 0xc0;
  uStack_c = 0x46000000;
  local_28 = 0x114;
  uStack_24 = 0;
  uStack_20 = 0xc0;
  uStack_1c = 0x46000000;
  iVar5 = *(int *)(*(int *)(in_ECX + 0x70) + 0x70);
  if ((((iVar5 != 0) && (puVar2 = *(undefined4 **)(iVar5 + 0x3c), puVar2 != (undefined4 *)0x0)) &&
      (iVar5 = (**(code **)*puVar2)(puVar2,&local_18,&local_30), piVar4 = local_30, -1 < iVar5)) &&
     (local_30 != (int *)0x0)) {
    local_34 = (int *)0x0;
    iVar5 = *(int *)(*(int *)(in_ECX + 0x70) + 0x70);
    if (((iVar5 != 0) && (puVar2 = *(undefined4 **)(iVar5 + 0x3c), puVar2 != (undefined4 *)0x0)) &&
       ((iVar5 = (**(code **)*puVar2)(puVar2,&local_28,&local_34), piVar3 = local_34, -1 < iVar5 &&
        (local_34 != (int *)0x0)))) {
      local_2c = (int *)0x0;
      iVar5 = (**(code **)(*piVar4 + 0x10))(piVar4,&local_2c);
      if (-1 < iVar5) {
        (**(code **)(*piVar3 + 0xc))(piVar3,&local_38);
        (**(code **)(*piVar4 + 0x2c))(piVar4,0xfffffffc,0,local_2c,0,local_38,0);
        if (*(code **)(*local_2c + 8) == FUN_004b6350) {
          piVar1 = local_2c + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*local_2c + 0x24))(1);
          }
        }
        else {
          (**(code **)(*local_2c + 8))(local_2c);
        }
      }
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

