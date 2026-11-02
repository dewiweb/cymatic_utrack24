// rea decompile_all
// name: FUN_00593a60
// address: 0x593a60
// body: available
// range: 0x593a60-0x593e30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00593a60(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int in_ECX;
  int iVar9;
  int *piVar10;
  undefined4 unaff_EBX;
  undefined1 local_f [2];
  undefined1 local_d;
  int local_c [2];
  
  local_c[0] = 0;
  local_f[0] = 0;
  local_d = 0;
  uVar4 = FUN_006e85c0();
  uVar5 = 0;
  if ((*(byte *)(in_ECX + 0x2080) & 2) != 0) {
    uVar5 = uVar4;
  }
  FUN_00595b20(in_ECX + 0x19d0,uVar5,*(undefined4 *)(in_ECX + 0x2714),in_ECX + 0x2758,
               (undefined4 *)(in_ECX + 0x2768),local_c,local_f,&local_d);
  FUN_0052ddf0();
  *(undefined4 *)(in_ECX + 0x1840) = *(undefined4 *)(in_ECX + 0x2760);
  *(undefined4 *)(in_ECX + 0x1848) = *(undefined4 *)(in_ECX + 0x2768);
  *(undefined4 *)(in_ECX + 0x1844) = *(undefined4 *)(in_ECX + 0x2764);
  *(undefined4 *)(in_ECX + 0x184c) = *(undefined4 *)(in_ECX + 0x276c);
  FUN_00592130();
  if ((*(int *)(in_ECX + 0x1acc) != 0) && (iVar6 = FUN_0068fb00(0), iVar6 != 0)) {
    (**(code **)(*(int *)(in_ECX + 0x78) + 4))(iVar6);
  }
  iVar6 = local_c[0];
  if (local_c[0] < 2) {
    (**(code **)(*(int *)(in_ECX + 0x1f48) + 0x28))(0);
    (**(code **)(*(int *)(in_ECX + 0x2018) + 0x28))(0);
    FUN_006e83a0(1,3);
    bVar1 = true;
    FUN_0063eab0();
    *(undefined4 *)(in_ECX + 0x2170) = 0;
    FUN_006e9e70(0);
  }
  else {
    (**(code **)(*(int *)(in_ECX + 0x1f48) + 0x28))(1);
    (**(code **)(*(int *)(in_ECX + 0x2018) + 0x28))(1);
    iVar9 = *(int *)(in_ECX + 0x20a8) + -1;
    if (-1 < iVar9) {
      piVar10 = (int *)(*(int *)(in_ECX + 0x20a0) + iVar9 * 4);
      do {
        if (*(int *)(*piVar10 + 4) == 1) {
          iVar9 = *(int *)(*(int *)(in_ECX + 0x20a0) + iVar9 * 4);
          if (iVar9 != 0) {
            *(byte *)(iVar9 + 8) = *(byte *)(iVar9 + 8) & 0xfe | 0 < iVar6;
          }
          break;
        }
        piVar10 = piVar10 + -1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    iVar9 = *(int *)(in_ECX + 0x20a8) + -1;
    if (-1 < iVar9) {
      piVar10 = (int *)(*(int *)(in_ECX + 0x20a0) + iVar9 * 4);
      do {
        if (*(int *)(*piVar10 + 4) == 2) {
          iVar9 = *(int *)(*(int *)(in_ECX + 0x20a0) + iVar9 * 4);
          if (iVar9 != 0) {
            *(byte *)(iVar9 + 8) = *(byte *)(iVar9 + 8) & 0xfe | 1 < iVar6;
          }
          break;
        }
        piVar10 = piVar10 + -1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    iVar9 = *(int *)(in_ECX + 0x20a8) + -1;
    if (-1 < iVar9) {
      piVar10 = (int *)(*(int *)(in_ECX + 0x20a0) + iVar9 * 4);
      do {
        if (*(int *)(*piVar10 + 4) == 3) {
          iVar9 = *(int *)(*(int *)(in_ECX + 0x20a0) + iVar9 * 4);
          if (iVar9 != 0) {
            *(byte *)(iVar9 + 8) = *(byte *)(iVar9 + 8) & 0xfe | 2 < iVar6;
          }
          break;
        }
        piVar10 = piVar10 + -1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    iVar9 = *(int *)(in_ECX + 0x20a8) + -1;
    if (-1 < iVar9) {
      piVar10 = (int *)(*(int *)(in_ECX + 0x20a0) + iVar9 * 4);
      do {
        if (*(int *)(*piVar10 + 4) == 4) {
          iVar9 = *(int *)(*(int *)(in_ECX + 0x20a0) + iVar9 * 4);
          if (iVar9 != 0) {
            *(byte *)(iVar9 + 8) = *(byte *)(iVar9 + 8) & 0xfe | 3 < iVar6;
          }
          break;
        }
        piVar10 = piVar10 + -1;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    iVar9 = FUN_006e85c0();
    bVar1 = iVar9 <= iVar6;
    FUN_005936d0();
  }
  cVar3 = (char)((uint)unaff_EBX >> 8);
  if (cVar3 == '\0') {
    iVar6 = *(int *)(in_ECX + 0x184c);
    if (*(uint *)(in_ECX + 0x1848) != 0 || iVar6 != 0) {
      iVar9 = *(int *)(in_ECX + 0x1854) - (uint)(*(uint *)(in_ECX + 0x1850) < 0x20000000);
      if ((iVar6 <= iVar9) &&
         (((iVar6 < iVar9 || (*(uint *)(in_ECX + 0x1848) <= *(uint *)(in_ECX + 0x1850) + 0xe0000000)
           ) && (bVar1)))) {
        bVar8 = 1;
        goto LAB_00593d12;
      }
    }
  }
  bVar8 = 0;
LAB_00593d12:
  uVar7 = CONCAT11(*(byte *)(in_ECX + 0x1df1),*(byte *)(in_ECX + 0x1df1) >> 4) & 0xffffff01;
  if ((byte)uVar7 == bVar8) {
    iVar6 = *(int *)(in_ECX + 0x1d94);
    *(byte *)(in_ECX + 0x1df1) = (bVar8 ^ 1) << 4 | (byte)(uVar7 >> 8) & 0xef;
    if ((iVar6 == 0) ||
       (((*(byte *)(iVar6 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar6 + 0xc) == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))))) {
      FUN_006cc240();
    }
  }
  if (((cVar3 == '\0') && (-1 < *(int *)(in_ECX + 0x2764))) &&
     ((0 < *(int *)(in_ECX + 0x2764) || (*(int *)(in_ECX + 0x2760) != 0)))) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  uVar7 = CONCAT11(*(byte *)(in_ECX + 0x1ed1),*(byte *)(in_ECX + 0x1ed1) >> 4) & 0xffffff01;
  if ((byte)uVar7 == bVar8) {
    iVar6 = *(int *)(in_ECX + 0x1e74);
    *(byte *)(in_ECX + 0x1ed1) = (bVar8 ^ 1) << 4 | (byte)(uVar7 >> 8) & 0xef;
    if ((iVar6 == 0) ||
       (((*(byte *)(iVar6 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar6 + 0xc) == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))))) {
      FUN_006cc240();
    }
  }
  if (((char)((uint)unaff_EBX >> 0x18) == '\0') && (cVar3 == '\0')) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  if ((*(byte *)(in_ECX + 0x1d11) >> 4 & 1) == bVar8) {
    iVar6 = *(int *)(in_ECX + 0x1cb4);
    *(byte *)(in_ECX + 0x1d11) = (bVar8 ^ 1) << 4 | *(byte *)(in_ECX + 0x1d11) & 0xef;
    if ((iVar6 == 0) ||
       (((*(byte *)(iVar6 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar6 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  return;
}

