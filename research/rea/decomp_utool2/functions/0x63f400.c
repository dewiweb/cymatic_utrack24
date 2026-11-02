// rea decompile_all
// name: FUN_0063f400
// address: 0x63f400
// body: available
// range: 0x63f400-0x63f5e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063f400(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  ushort uVar6;
  undefined4 *in_ECX;
  int in_EDX;
  uint uVar7;
  int local_34;
  undefined8 local_30;
  char *local_28;
  undefined4 *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined8 local_16;
  undefined2 local_e;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_34;
  local_1c = 0;
  uVar3 = *(uint *)(in_EDX + 8);
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    local_30 = 0;
    local_30._0_4_ = 0;
    uVar7 = (uint)local_30;
  }
  else if ((param_2 < 0x80000000) && ((0 < (int)param_2 || (uVar3 < param_1)))) {
    local_30 = (ulonglong)(uint)local_30;
    uVar7 = uVar3;
  }
  else {
    local_30 = CONCAT44(param_2,(uint)local_30);
    uVar7 = param_1;
  }
  uVar6 = 0;
  *(uint *)(in_EDX + 0xc) = uVar7;
  local_30._0_6_ = (uint6)(ushort)local_30;
  local_24 = in_ECX;
  if (uVar7 < uVar3) {
    uVar4 = 6;
    if (uVar3 - uVar7 < 6) {
      uVar4 = uVar3 - uVar7;
    }
    if (uVar4 != 0) {
      FUN_004c2c30(&local_30,*(int *)(in_EDX + 4) + uVar7,uVar4);
      uVar6 = (ushort)(local_30 >> 0x10);
      *(uint *)(in_EDX + 0xc) = uVar7 + uVar4;
    }
  }
  local_20 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
  local_34 = 0;
  if (local_20 != 0) {
    do {
      uVar3 = *(uint *)(in_EDX + 0xc);
      local_18 = 0;
      local_e = 0;
      local_16 = 0;
      if (uVar3 < *(uint *)(in_EDX + 8)) {
        uVar4 = *(uint *)(in_EDX + 8) - uVar3;
        uVar7 = 0xc;
        if (uVar4 < 0xc) {
          uVar7 = uVar4;
        }
        if (uVar7 != 0) {
          FUN_004c2c30(&local_18,*(int *)(in_EDX + 4) + uVar3,uVar7);
          *(uint *)(in_EDX + 0xc) = uVar3 + uVar7;
        }
      }
      iVar2 = local_34;
      if ((ushort)(local_16._4_2_ << 8 | local_16._4_2_ >> 8) == 4) {
        FUN_0063f5f0(&local_18,param_1,param_2,local_30._4_2_ << 8 | local_30._4_2_ >> 8,0);
        piVar5 = (int *)(local_28 + -8);
        if (*local_28 != '\0') {
          *local_24 = local_28;
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            UNLOCK();
          }
          piVar5 = (int *)(local_28 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              FID_conflict__free(piVar5);
              __security_check_cookie(local_c ^ (uint)&local_34);
              return;
            }
          }
          goto LAB_0063f587;
        }
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      local_34 = iVar2 + 1;
    } while (local_34 < (int)local_20);
  }
  *local_24 = &DAT_00bfe12c;
LAB_0063f587:
  __security_check_cookie(local_c ^ (uint)&local_34);
  return;
}

