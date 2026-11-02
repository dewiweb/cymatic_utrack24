// rea decompile_all
// name: FUN_00461420
// address: 0x461420
// body: available
// range: 0x461420-0x461575 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461420(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  undefined **local_28 [2];
  undefined1 local_20 [8];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700ba7;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 == 0) {
    cVar2 = FUN_00629480(param_1,param_2);
    if (cVar2 != '\0') {
      FUN_00461010(param_1);
    }
  }
  else {
    piVar4 = *(int **)(in_ECX + 0xc);
    piVar1 = piVar4 + *(int *)(in_ECX + 0x14) * 6;
    if (piVar4 != piVar1) {
      do {
        if (*piVar4 == *param_1) {
          piVar1 = piVar4 + 2;
          if (piVar1 != (int *)0x0) {
            cVar2 = (**(code **)(*(int *)*piVar1 + 0x5c))(piVar4 + 4,param_2 + 2,*param_2,local_18);
            if (cVar2 == '\0') {
              operator_new(0x38);
              local_8 = 0;
              uVar3 = FUN_00461e80(in_ECX,param_1,param_2,piVar1,0,0);
              local_8 = 0xffffffff;
              FUN_0063ba90(uVar3);
            }
            goto LAB_004614fb;
          }
          break;
        }
        piVar4 = piVar4 + 6;
      } while (piVar4 != piVar1);
    }
    operator_new(0x38);
    local_28[0] = &PTR_vftable_00c7ed38;
    local_8 = 2;
    uVar3 = FUN_00461e80(in_ECX,param_1,param_2,local_28,1,0);
    local_8 = 3;
    FUN_0063ba90(uVar3);
    (**(code **)(*local_28[0] + 0x54))(local_20);
  }
LAB_004614fb:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

