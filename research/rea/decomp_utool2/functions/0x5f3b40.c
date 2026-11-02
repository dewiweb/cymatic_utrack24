// rea decompile_all
// name: FUN_005f3b40
// address: 0x5f3b40
// body: available
// range: 0x5f3b40-0x5f3da6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f3b40(uint *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  code *pcVar8;
  int in_ECX;
  int iVar9;
  uint *puVar10;
  uint *in_EDX;
  longlong lVar11;
  undefined1 auStack_4c [4];
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint local_38;
  int local_34;
  uint local_30 [5];
  int local_1c [6];
  
  local_1c[4] = DAT_00c76070 ^ (uint)auStack_4c;
  iVar7 = *(int *)(in_ECX + 4);
  local_3c = in_EDX;
  if (*(int *)(iVar7 + 0xe1c) == 0) {
    if (*(int *)(iVar7 + 0xf0) == 0) {
      *(undefined4 *)(iVar7 + 0xe14) = 0;
    }
    if ((*(int *)(*(int *)(in_ECX + 4) + 0xe14) != 0) &&
       (local_34 = in_ECX, iVar7 = FUN_005f76d0(in_EDX[2],*in_EDX,in_EDX[4] + 7 >> 3),
       in_ECX = local_34, iVar7 == 0)) {
      __security_check_cookie(local_1c[4] ^ (uint)auStack_4c);
      return;
    }
    iVar7 = *(int *)(in_ECX + 4);
  }
  else {
    local_40 = (uint *)in_EDX[6];
    uVar3 = in_EDX[7];
    local_44 = (uint *)(*in_EDX + (int)local_40);
    local_48 = *(uint **)(iVar7 + 0x17e8);
    local_38 = uVar3 + CARRY4(*in_EDX,(uint)local_40);
    local_30[0] = *(uint *)(iVar7 + 0x17ec);
    puVar10 = in_EDX;
    puVar6 = (uint *)(iVar7 + 0xe90);
    for (iVar9 = 0x254; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 1;
    }
    if ((local_30[0] < uVar3) ||
       ((((local_30[0] <= uVar3 && (local_48 < local_40)) || (local_38 < local_30[0])) ||
        ((local_38 <= local_30[0] && (local_44 <= local_48)))))) {
      __security_check_cookie(local_1c[4] ^ (uint)auStack_4c);
      return;
    }
    local_48 = (uint *)((int)local_48 - (int)local_40);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0xe1c) = 0;
    if (local_48 != (uint *)0x0) {
      local_40 = (uint *)in_EDX[2];
      puVar10 = (uint *)0x0;
      if (local_40 != (uint *)0x0) {
        if (((uint *)0x7 < local_40) &&
           ((param_1 + (int)local_40 + -1 < local_30 + 1 || (local_30 + (int)local_40 < param_1))))
        {
          local_3c = (uint *)((uint)local_40 & 0xfffffff8);
          local_44 = (uint *)((int)local_30 + -(int)param_1 + 4);
          local_30[0] = (int)local_1c + -(int)param_1;
          lVar11 = SUB168(ZEXT416(2),0);
          puVar6 = param_1;
          do {
            uVar3 = puVar6[1];
            uVar4 = puVar6[2];
            uVar5 = puVar6[3];
            puVar10 = puVar10 + 2;
            puVar1 = puVar6 + 8;
            piVar2 = (int *)(auStack_4c + -(int)param_1 + (int)puVar1);
            *piVar2 = *puVar6 + ((int)local_48 << lVar11);
            piVar2[1] = uVar3 + ((int)local_48 << lVar11);
            piVar2[2] = uVar4 + ((int)local_48 << lVar11);
            piVar2[3] = uVar5 + ((int)local_48 << lVar11);
            uVar3 = puVar6[5];
            uVar4 = puVar6[6];
            uVar5 = puVar6[7];
            piVar2 = (int *)((int)&local_3c + -(int)param_1 + (int)puVar1);
            *piVar2 = puVar6[4] + ((int)local_48 << lVar11);
            piVar2[1] = uVar3 + ((int)local_48 << lVar11);
            piVar2[2] = uVar4 + ((int)local_48 << lVar11);
            piVar2[3] = uVar5 + ((int)local_48 << lVar11);
            puVar6 = puVar1;
          } while (puVar10 < local_3c);
        }
        if (puVar10 < local_40) {
          local_44 = (uint *)((int)local_48 * 4);
          do {
            local_30[(int)puVar10 + 1] = param_1[(int)puVar10] + (int)local_44;
            puVar10 = (uint *)((int)puVar10 + 1);
          } while (puVar10 < local_40);
        }
      }
      piVar2 = (int *)(*(int *)(in_ECX + 4) + 0xe90);
      *piVar2 = *piVar2 - (int)local_48;
      iVar7 = *(int *)(in_ECX + 4);
      puVar10 = (uint *)(iVar7 + 0xea8);
      uVar3 = *puVar10;
      *puVar10 = *puVar10 + (int)local_48;
      piVar2 = (int *)(iVar7 + 0xeac);
      *piVar2 = *piVar2 + (uint)CARRY4(uVar3,(uint)local_48);
      pcVar8 = *(code **)(*(int *)(in_ECX + 4) + 0x14);
      goto LAB_005f3d8f;
    }
    iVar7 = *(int *)(in_ECX + 4);
  }
  pcVar8 = *(code **)(iVar7 + 0x14);
LAB_005f3d8f:
  (*pcVar8)(in_ECX);
  __security_check_cookie(local_1c[4] ^ (uint)auStack_4c);
  return;
}

