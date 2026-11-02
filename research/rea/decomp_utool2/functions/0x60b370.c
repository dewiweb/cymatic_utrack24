// rea decompile_all
// name: FUN_0060b370
// address: 0x60b370
// body: available
// range: 0x60b370-0x60b58f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060b370(void)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  int in_ECX;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined1 auStack_4c [7];
  undefined1 local_45;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *local_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  uint uVar7;
  
  local_c = DAT_00c76070 ^ (uint)auStack_4c;
  local_3c = *(int *)(in_ECX + 0x140) + -1;
  local_45 = 0;
  if (-1 < local_3c) {
    local_40 = local_3c * 0xc;
    piVar1 = (int *)(in_ECX + 0xdc);
    iVar4 = in_ECX;
    local_44 = in_ECX;
    do {
      puVar9 = (uint *)(*(int *)(iVar4 + 0x138) + local_40);
      uVar7 = *puVar9;
      uVar2 = *(int *)(*(int *)(iVar4 + 0x144) + local_3c * 4) + *(int *)(iVar4 + 0x150) * 0xc;
      sVar6 = (short)uVar7;
      if ((uVar7 & 0x10000) == 0) {
        if ((ushort)(sVar6 - 0x61U) < 0x1a) {
          uVar7 = uVar7 - 0x20;
        }
        uVar7 = uVar7 & 0xffff;
        iVar4 = 0;
        local_34 = &UNK_00bc002c;
        puStack_30 = &UNK_00bb002b;
        puStack_2c = &UNK_00bd002d;
        puStack_28 = &UNK_00be002e;
        local_14 = 0xdb005b;
        local_24 = &UNK_00ba003b;
        puStack_20 = &UNK_00ba003a;
        puStack_1c = &UNK_00bf002f;
        puStack_18 = &UNK_00bf003f;
        local_10 = 0xdd005d;
        do {
          if ((short)uVar7 == *(short *)((int)&local_34 + iVar4 * 2)) {
            uVar7 = (uint)*(ushort *)((int)&local_34 + iVar4 * 2 + 2);
          }
          sVar6 = (short)uVar7;
          iVar4 = iVar4 + 2;
        } while (iVar4 < 0x14);
      }
      uVar3 = GetAsyncKeyState((int)sVar6);
      iVar8 = (int)uVar2 >> 5;
      iVar4 = local_44;
      if (((uVar3 & 0x8000) == 0) || (((puVar9[1] ^ DAT_00c8a9c8) & 7) != 0)) {
        if (((int)uVar2 <= *(int *)(in_ECX + 0xf4)) && (-1 < (int)uVar2)) {
          iVar10 = *piVar1;
          if (iVar10 == 0) {
            iVar10 = in_ECX + 0xe0;
          }
          local_38 = uVar2 & 0x1f;
          if ((*(uint *)(iVar10 + iVar8 * 4) & 1 << (sbyte)local_38) != 0) {
            if ((int)uVar2 <= *(int *)(in_ECX + 0xf4)) {
              iVar4 = *piVar1;
              if (iVar4 == 0) {
                iVar4 = in_ECX + 0xe0;
              }
              *(uint *)(iVar4 + iVar8 * 4) = *(uint *)(iVar4 + iVar8 * 4) & ~(1 << local_38);
              if (uVar2 == *(uint *)(in_ECX + 0xf4)) {
                uVar5 = FUN_00637300();
                *(undefined4 *)(in_ECX + 0xf4) = uVar5;
              }
            }
            iVar4 = local_44;
            FUN_005c5890(*(undefined4 *)(local_44 + 0xb8),uVar2);
            local_45 = 1;
          }
        }
      }
      else {
        if (*(int *)(in_ECX + 0xf4) < (int)uVar2) {
LAB_0060b48b:
          if (-1 < (int)uVar2) {
            if (*(int *)(in_ECX + 0xf4) < (int)uVar2) {
              FUN_006264b0(iVar8 + 1);
              *(uint *)(in_ECX + 0xf4) = uVar2;
            }
            iVar4 = *piVar1;
            if (iVar4 == 0) {
              iVar4 = in_ECX + 0xe0;
            }
            *(uint *)(iVar4 + iVar8 * 4) = *(uint *)(iVar4 + iVar8 * 4) | 1 << (uVar2 & 0x1f);
          }
        }
        else if (-1 < (int)uVar2) {
          iVar10 = *piVar1;
          if (iVar10 == 0) {
            iVar10 = in_ECX + 0xe0;
          }
          if ((*(uint *)(iVar10 + iVar8 * 4) & 1 << ((byte)uVar2 & 0x1f)) != 0) goto LAB_0060b566;
          goto LAB_0060b48b;
        }
        iVar4 = local_44;
        FUN_005c5a10(*(undefined4 *)(local_44 + 0xb8),uVar2);
        local_45 = 1;
      }
LAB_0060b566:
      local_40 = local_40 + -0xc;
      local_3c = local_3c + -1;
    } while (-1 < local_3c);
  }
  __security_check_cookie(local_c ^ (uint)auStack_4c);
  return;
}

