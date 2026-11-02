// rea decompile_all
// name: FUN_00461580
// address: 0x461580
// body: available
// range: 0x461580-0x4616a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461580(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined **local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700bf8;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    uVar1 = *(uint *)(in_ECX + 0x14);
    uVar3 = 0;
    if (0 < (int)uVar1) {
      piVar5 = *(int **)(in_ECX + 0xc);
      do {
        if (*piVar5 == *param_1) {
          if (uVar3 < uVar1) {
            FUN_0045a550(uVar3);
          }
          FUN_00461010(param_1);
          break;
        }
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 6;
      } while ((int)uVar3 < (int)uVar1);
    }
  }
  else {
    piVar4 = *(int **)(in_ECX + 0xc);
    piVar5 = piVar4 + *(int *)(in_ECX + 0x14) * 6;
    if (piVar4 != piVar5) {
      do {
        if (*piVar4 == *param_1) {
          if (piVar4 != (int *)0xfffffff8) {
            operator_new(0x38);
            local_24[0] = &PTR_vftable_00c7ed38;
            uVar7 = 1;
            uVar6 = 0;
            local_8 = 1;
            uVar2 = FUN_00637190(param_1);
            uVar2 = FUN_00461e80(in_ECX,param_1,local_24,uVar2,uVar6,uVar7);
            local_8 = 2;
            FUN_0063ba90(uVar2);
            (**(code **)(*local_24[0] + 0x54))(local_1c);
          }
          break;
        }
        piVar4 = piVar4 + 6;
      } while (piVar4 != piVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

