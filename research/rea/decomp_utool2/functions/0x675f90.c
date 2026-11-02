// rea decompile_all
// name: FUN_00675f90
// address: 0x675f90
// body: available
// range: 0x675f90-0x676354 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00675f90(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_ECX;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  int local_c4;
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  char *local_9c;
  char local_7b [36];
  char local_57 [36];
  char local_33 [36];
  char local_f [7];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(char *)(in_ECX + 0x10) != '\0') {
    *(undefined1 *)(in_ECX + 0x10) = 0;
    (**(code **)(**(int **)(in_ECX + 4) + 0x10))("doclip ",7);
    iVar1 = *(int *)(in_ECX + 0x20);
    local_c4 = 0;
    if (iVar1 < 1) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = *(undefined4 **)(*(int *)(in_ECX + 0x18) + -4 + iVar1 * 4);
    }
    puVar4 = (undefined4 *)*puVar4;
    if (iVar1 < 1) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(*(int *)(in_ECX + 0x18) + -4 + iVar1 * 4);
    }
    iVar1 = piVar5[2];
    iVar2 = *piVar5;
    for (; puVar4 != (undefined4 *)(iVar1 * 0x10 + iVar2); puVar4 = puVar4 + 4) {
      local_c4 = local_c4 + 1;
      if (local_c4 == 6) {
        local_c4 = 0;
        pcVar3 = *(code **)(**(int **)(in_ECX + 4) + 0x14);
        if (pcVar3 == FUN_0062c8e0) {
          local_a0[0] = 10;
          (**(code **)(**(int **)(in_ECX + 4) + 0x10))(local_a0,1);
        }
        else {
          (*pcVar3)(10);
        }
      }
      uVar10 = puVar4[3];
      uVar11 = puVar4[2];
      pcVar12 = (char *)*puVar4;
      piVar5 = *(int **)(in_ECX + 4);
      uVar8 = puVar4[1];
      pcVar13 = local_f + 2;
      local_f[2] = 0;
      if ((int)pcVar12 < 0) {
        uVar9 = -(int)pcVar12;
        do {
          pcVar6 = pcVar13;
          pcVar13 = pcVar6 + -1;
          uVar7 = uVar9 / 10;
          *pcVar13 = (char)uVar9 + (char)uVar7 * -10 + '0';
          uVar9 = uVar7;
        } while (uVar7 != 0);
        pcVar13 = pcVar6 + -2;
        *pcVar13 = '-';
        local_9c = pcVar12;
      }
      else {
        do {
          pcVar13 = pcVar13 + -1;
          pcVar6 = (char *)((uint)pcVar12 / 10);
          *pcVar13 = (char)pcVar12 + (char)pcVar6 * -10 + '0';
          pcVar12 = pcVar6;
          local_9c = pcVar13;
        } while (pcVar6 != (char *)0x0);
      }
      (**(code **)(*piVar5 + 0x10))(pcVar13,local_f + (2 - (int)pcVar13));
      if (*(code **)(*piVar5 + 0x14) == FUN_0062c8e0) {
        local_a4[0] = 0x20;
        (**(code **)(*piVar5 + 0x10))(local_a4,1);
      }
      else {
        (**(code **)(*piVar5 + 0x14))(0x20);
      }
      local_9c = (char *)-uVar8;
      local_33[2] = 0;
      pcVar13 = local_33 + 2;
      uVar9 = (uint)local_9c;
      if ((int)local_9c < 0) {
        do {
          pcVar12 = pcVar13;
          pcVar13 = pcVar12 + -1;
          uVar9 = uVar8 / 10;
          *pcVar13 = (char)uVar8 + (char)uVar9 * -10 + '0';
          uVar8 = uVar9;
        } while (uVar9 != 0);
        pcVar13 = pcVar12 + -2;
        *pcVar13 = '-';
      }
      else {
        do {
          pcVar13 = pcVar13 + -1;
          uVar8 = uVar9 / 10;
          *pcVar13 = (char)uVar9 + (char)uVar8 * -10 + '0';
          uVar9 = uVar8;
        } while (uVar8 != 0);
      }
      (**(code **)(*piVar5 + 0x10))(pcVar13,local_33 + (2 - (int)pcVar13));
      pcVar3 = *(code **)(*piVar5 + 0x14);
      if (pcVar3 == FUN_0062c8e0) {
        local_a8[0] = 0x20;
        (**(code **)(*piVar5 + 0x10))(local_a8,1);
      }
      else {
        (*pcVar3)(0x20);
      }
      local_57[2] = 0;
      pcVar13 = local_57 + 2;
      if ((int)uVar11 < 0) {
        uVar11 = -uVar11;
        do {
          pcVar12 = pcVar13;
          pcVar13 = pcVar12 + -1;
          uVar8 = uVar11 / 10;
          *pcVar13 = (char)uVar11 + (char)uVar8 * -10 + '0';
          uVar11 = uVar8;
        } while (uVar8 != 0);
        pcVar13 = pcVar12 + -2;
        *pcVar13 = '-';
      }
      else {
        do {
          pcVar13 = pcVar13 + -1;
          uVar8 = uVar11 / 10;
          *pcVar13 = (char)uVar11 + (char)uVar8 * -10 + '0';
          uVar11 = uVar8;
        } while (uVar8 != 0);
      }
      (**(code **)(*piVar5 + 0x10))(pcVar13,local_57 + (2 - (int)pcVar13));
      pcVar3 = *(code **)(*piVar5 + 0x14);
      if (pcVar3 == FUN_0062c8e0) {
        local_ac[0] = 0x20;
        (**(code **)(*piVar5 + 0x10))(local_ac,1);
      }
      else {
        (*pcVar3)(0x20);
      }
      local_7b[2] = 0;
      pcVar13 = local_7b + 2;
      uVar11 = -uVar10;
      if ((int)-uVar10 < 0) {
        do {
          pcVar12 = pcVar13;
          pcVar13 = pcVar12 + -1;
          uVar11 = uVar10 / 10;
          *pcVar13 = (char)uVar10 + (char)uVar11 * -10 + '0';
          uVar10 = uVar11;
        } while (uVar11 != 0);
        pcVar13 = pcVar12 + -2;
        *pcVar13 = '-';
      }
      else {
        do {
          pcVar13 = pcVar13 + -1;
          uVar10 = uVar11 / 10;
          *pcVar13 = (char)uVar11 + (char)uVar10 * -10 + '0';
          uVar11 = uVar10;
        } while (uVar10 != 0);
      }
      (**(code **)(*piVar5 + 0x10))(pcVar13,local_7b + (2 - (int)pcVar13));
      (**(code **)(*piVar5 + 0x10))(&DAT_00c02b0c,4);
    }
    (**(code **)(**(int **)(in_ECX + 4) + 0x10))("endclip\n",8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

