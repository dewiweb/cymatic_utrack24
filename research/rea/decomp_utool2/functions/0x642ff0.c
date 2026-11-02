// rea decompile_all
// name: FUN_00642ff0
// address: 0x642ff0
// body: available
// range: 0x642ff0-0x6431e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00642ff0(int *param_1,undefined4 *param_2,undefined4 param_3,float param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_ECX;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float in_XMM3_Da;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  undefined1 local_3c;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c;
  undefined4 local_28;
  int local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071fdee;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)*param_2 != '\0') {
    local_2c = (void *)0x0;
    local_28 = 0;
    local_24 = 0;
    local_38 = (void *)0x0;
    local_34 = 0;
    local_30 = 0;
    local_8 = 1;
    local_18 = in_XMM3_Da;
    FUN_00643870(param_2,&local_2c,&local_38);
    iVar4 = local_24;
    iVar6 = in_ECX[2] + local_24;
    if (((int)in_ECX[1] < iVar6) && (uVar8 = iVar6 + 8 + iVar6 / 2 & 0xfffffff8, in_ECX[1] != uVar8)
       ) {
      if ((int)uVar8 < 1) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
      }
      else {
        FUN_00419e50(uVar8,iVar6);
      }
      in_ECX[1] = uVar8;
    }
    iVar6 = 0;
    local_14 = (char *)*param_2;
    if (0 < iVar4) {
      local_20 = param_4 + 1.0;
      do {
        fVar9 = *(float *)((int)local_38 + iVar6 * 4 + 4);
        if (local_20 < fVar9) {
          if (((param_5 != '\0') && (3 < iVar4)) && (2 < (int)in_ECX[2])) {
            FUN_00642dd0(param_1,0,in_ECX[2]);
          }
          break;
        }
        cVar3 = *local_14;
        fVar10 = *(float *)((int)local_38 + iVar6 * 4);
        if ((cVar3 == ' ') || ((cVar3 < '\x0e' && ('\b' < cVar3)))) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
        local_1c = *(undefined4 *)((int)local_2c + iVar6 * 4);
        local_50 = FUN_00443260(uVar5);
        local_54 = (undefined4 *)*param_1;
        if (local_54 != (undefined4 *)0x0) {
          LOCK();
          local_54[1] = local_54[1] + 1;
          UNLOCK();
        }
        local_48 = fVar10 + local_18;
        local_40 = fVar9 - fVar10;
        local_4c = local_1c;
        local_44 = param_3;
        local_3c = uVar7;
        FUN_0046e660(&local_54);
        if (local_54 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_54 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_54)(1);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    FID_conflict__free(local_38);
    FID_conflict__free(local_2c);
  }
  ExceptionList = local_10;
  return;
}

