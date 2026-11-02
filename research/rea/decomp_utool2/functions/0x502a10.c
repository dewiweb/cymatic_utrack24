// rea decompile_all
// name: FUN_00502a10
// address: 0x502a10
// body: available
// range: 0x502a10-0x502c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00502a10(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_2;
  puVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007075f4;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != (undefined4 *)0x0) {
    iVar7 = param_1[2];
    if (iVar7 == 1) {
      iVar7 = 0;
      if (0 < (int)param_1[0x16]) {
        do {
          puVar6 = (undefined4 *)FUN_00411090(&param_1,iVar7);
          local_8 = 0;
          FUN_00502a10(*puVar6,param_2);
          local_8 = 0xffffffff;
          if (param_1 != (undefined4 *)0x0) {
            LOCK();
            piVar1 = param_1 + 1;
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)*param_1)(1,uVar3);
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)puVar4[0x16]);
      }
    }
    else {
      if (iVar7 == 2) {
        if (*param_2 < 0) {
          param_1 = operator_new(0x18);
          puVar4 = (undefined4 *)FUN_0040ebb0(&param_2);
          uVar5 = FUN_00410ff0(*puVar4,1,0);
          FUN_004111b0(uVar5);
          FUN_004030d0();
          ExceptionList = local_10;
          return;
        }
        param_1 = operator_new(0x18);
        puVar4 = (undefined4 *)FUN_0040ebb0(&param_2);
        uVar5 = FUN_00410ff0(*puVar4,1,0);
        FUN_00411110(*piVar1,uVar5);
        FUN_004030d0();
        *piVar1 = *piVar1 + 1;
        ExceptionList = local_10;
        return;
      }
      if (iVar7 == 3) {
        if (*param_2 < 0) {
          param_1 = operator_new(0x18);
          puVar4 = (undefined4 *)FUN_0040ebd0(&param_2);
          uVar5 = FUN_00411030(*puVar4,1,0);
          FUN_004111b0(uVar5);
          FUN_004030d0();
          ExceptionList = local_10;
          return;
        }
        param_1 = operator_new(0x18);
        puVar4 = (undefined4 *)FUN_0040ebd0(&param_2);
        uVar5 = FUN_00411030(*puVar4,1,0);
        FUN_00411110(*piVar1,uVar5);
        FUN_004030d0();
        *piVar1 = *piVar1 + 1;
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

