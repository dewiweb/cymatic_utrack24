// rea decompile_all
// name: FUN_0060ee00
// address: 0x60ee00
// body: available
// range: 0x60ee00-0x60eff5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0060ee00(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined1 uVar4;
  undefined8 uVar5;
  int local_50;
  undefined4 *local_4c;
  char local_48;
  void *local_20;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c70c;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00629660(param_1,0x1000);
  local_8 = 0;
  param_1 = param_1 & 0xffffff;
  (**(code **)(local_50 + 0xc))((int)&param_1 + 3,1,uVar1);
  if (param_1._3_1_ == 'j') {
    param_1 = param_1 & 0xffffff;
    (**(code **)(local_50 + 0xc))((int)&param_1 + 3,1);
    if (param_1._3_1_ == 'a') {
      param_1 = param_1 & 0xffffff;
      (**(code **)(local_50 + 0xc))((int)&param_1 + 3,1);
      if (param_1._3_1_ == 't') {
        param_1 = param_1 & 0xffffff;
        (**(code **)(local_50 + 0xc))((int)&param_1 + 3,1);
        if (param_1._3_1_ == 'm') {
          EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x60));
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_0060f210();
          iVar2 = (**(code **)(local_50 + 0xc))(&param_1,4);
          uVar1 = 0;
          if (iVar2 == 4) {
            uVar1 = param_1;
          }
          *(uint *)(in_ECX + 0x3c) = uVar1;
          uVar5 = FUN_006298d0();
          *(undefined8 *)(in_ECX + 0x40) = uVar5;
          uVar5 = FUN_006298d0();
          *(undefined8 *)(in_ECX + 0x48) = uVar5;
          iVar2 = (**(code **)(local_50 + 0xc))(&param_1,4);
          uVar1 = 0;
          if (iVar2 == 4) {
            uVar1 = param_1;
          }
          param_1 = uVar1;
          iVar3 = (**(code **)(local_50 + 0xc))(&local_14,4);
          iVar2 = 0;
          if (iVar3 == 4) {
            iVar2 = local_14;
          }
          *(int *)(in_ECX + 0x50) = iVar2;
          iVar3 = (**(code **)(local_50 + 0xc))(&local_14,4);
          iVar2 = 0;
          if (iVar3 == 4) {
            iVar2 = local_14;
          }
          *(double *)(in_ECX + 0x58) = (double)iVar2;
          FUN_006297f0(0x10,0);
          FUN_0060f000(uVar1);
          iVar2 = 0;
          if (0 < (int)uVar1) {
            do {
              iVar3 = 0;
              if (0 < *(int *)(in_ECX + 0x50)) {
                do {
                  (**(code **)(local_50 + 0xc))
                            (**(int **)(*(int *)(in_ECX + 0x30) + iVar3 * 4) + iVar2 * 2,2);
                  iVar3 = iVar3 + 1;
                  uVar1 = param_1;
                } while (iVar3 < *(int *)(in_ECX + 0x50));
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)uVar1);
          }
          uVar4 = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x60));
          goto LAB_0060efbb;
        }
      }
    }
  }
  uVar4 = 0;
LAB_0060efbb:
  FID_conflict__free(local_20);
  if ((local_48 != '\0') && (local_4c != (undefined4 *)0x0)) {
    (**(code **)*local_4c)(1);
  }
  ExceptionList = local_10;
  return uVar4;
}

