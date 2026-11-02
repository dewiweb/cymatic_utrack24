// rea decompile_all
// name: FUN_00629480
// address: 0x629480
// body: available
// range: 0x629480-0x6295a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629480(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int local_2c [2];
  int *local_24;
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071dc17;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar5 = (int *)*in_ECX;
  piVar4 = piVar5 + in_ECX[2] * 6;
  if (piVar5 != piVar4) {
    do {
      if (*piVar5 == *param_1) {
        piVar4 = piVar5 + 2;
        if (piVar4 != (int *)0x0) {
          if (((int *)*piVar4 != (int *)*param_2) ||
             (cVar3 = (**(code **)(*(int *)*piVar4 + 0x5c))
                                (piVar5 + 4,param_2 + 2,(int *)*param_2,local_14), cVar3 == '\0')) {
            (**(code **)(*(int *)*piVar4 + 0x54))(piVar5 + 4);
            piVar2 = (int *)*param_2;
            *piVar4 = (int)piVar2;
            (**(code **)(*piVar2 + 0x58))(piVar5 + 4,param_2 + 2);
          }
          goto LAB_0062958c;
        }
        break;
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != piVar4);
  }
  local_2c[0] = *param_1;
  piVar4 = (int *)(local_2c[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_24 = (int *)*param_2;
  (**(code **)(*local_24 + 0x58))(local_1c,param_2 + 2);
  FUN_00458d40(local_2c);
  (**(code **)(*local_24 + 0x54))(local_1c);
  piVar4 = (int *)(local_2c[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
LAB_0062958c:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

