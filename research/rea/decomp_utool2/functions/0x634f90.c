// rea decompile_all
// name: FUN_00634f90
// address: 0x634f90
// body: available
// range: 0x634f90-0x635107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00634f90(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  uint extraout_ECX;
  uint uVar6;
  char *pcVar7;
  int *extraout_EDX;
  int local_40;
  int *local_38;
  char *local_2c;
  uint local_24;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071eb1c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(char *)*in_ECX == '\0') && (in_ECX[9] != 0)) {
    puVar2 = (undefined4 *)FUN_006358c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0062cb00(0x100);
      iVar3 = -1;
      local_8 = CONCAT31(local_8._1_3_,1);
      if ((char)param_1 != '\0') {
        iVar3 = 0x2000;
      }
      FUN_00622920(puVar2,iVar3,iVar3 >> 0x1f);
      if (2 < local_24) {
        local_14[0] = 0;
        (**(code **)(local_40 + 0x10))(local_14,1);
        uVar6 = extraout_ECX;
        if (local_38 != (int *)0x0) {
          if (local_24 < (uint)local_38[1]) {
            *(undefined1 *)(local_24 + *local_38) = 0;
          }
          local_2c = (char *)*local_38;
          uVar6 = local_24;
        }
        if (((*local_2c != -2) || (local_2c[1] != -1)) && ((*local_2c != -1 || (local_2c[1] != -2)))
           ) {
          cVar1 = FUN_0044ed50(uVar6,param_1);
          pcVar7 = local_2c + 3;
          if (cVar1 == '\0') {
            pcVar7 = local_2c;
          }
          *extraout_EDX = (int)pcVar7;
          uVar5 = FUN_0061cf00(uVar6,param_1);
          FUN_0062cab0();
          (**(code **)*puVar2)(1);
          ExceptionList = local_10;
          return uVar5;
        }
        puVar4 = (undefined4 *)FUN_00622840(local_18);
        uVar5 = *in_ECX;
        *in_ECX = *puVar4;
        *puVar4 = uVar5;
        FUN_00637c10();
      }
      FUN_0062cab0();
    }
    local_8 = 0xffffffff;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  uVar5 = FUN_0061cf00(*in_ECX,param_1);
  ExceptionList = local_10;
  return uVar5;
}

