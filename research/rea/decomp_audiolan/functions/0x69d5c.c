// rea decompile_all
// name: FUN_00069d5c
// address: 0x69d5c
// body: available
// range: 0x69d5c-0x6a12b inclusive
// range: 0x6a158-0x6a19b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00069ee8) */
/* WARNING: Removing unreachable block (ram,0x00069ef4) */

undefined4 FUN_00069d5c(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint local_140 [6];
  uint local_128;
  undefined4 uStack_124;
  int local_dc;
  undefined4 local_d8 [35];
  undefined1 auStack_4c [8];
  int *local_44;
  undefined4 local_40;
  int local_2c;
  int iStack_28;
  
  local_2c = param_1;
  iStack_28 = param_2;
  if (param_2 == 0) {
    FUN_000028a4(DAT_0006a14c);
    return 0;
  }
  pcVar3 = (char *)FUN_0008b800(auStack_4c);
  *(undefined4 *)pcVar3 = s_l0__AudioHWService_0006a12c._0_4_;
  uVar4 = FUN_0008cf78();
  iVar5 = FUN_0008ce54(uVar4,s_l0__AudioHWService_0006a12c + 4,auStack_4c);
  uVar4 = DAT_0006a144;
  if (iVar5 == 0) {
    FUN_000028a4(DAT_0006a150);
    FUN_0008b818(auStack_4c);
    return 0;
  }
  iVar5 = 0;
  local_40 = DAT_0006a140;
  do {
    puVar14 = (undefined4 *)(param_2 + iVar5 * 0xc);
    if (puVar14[1] == -1) {
LAB_00069e04:
      FUN_0008b818(auStack_4c);
      return 1;
    }
    local_dc = (**(code **)(*local_44 + 0x70))(local_44,*puVar14);
    piVar6 = (int *)(**(code **)(*local_44 + 0x6c))(local_44,puVar14[1]);
    if (piVar6 == (int *)0x0) {
      iVar10 = FUN_001a0808(0x98,1);
      if (iVar10 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)FUN_000c8df4(iVar10,puVar14[1],*(undefined1 *)(puVar14 + 2));
      }
      (**(code **)(*local_44 + 100))(local_44,piVar6);
      iVar10 = local_2c;
      piVar15 = (int *)(local_2c + 0x48);
      puVar9 = *(undefined4 **)(local_2c + 0x4c);
      if (puVar9 == *(undefined4 **)(local_2c + 0x50)) {
        uVar1 = (int)puVar9 - *piVar15 >> 2;
        if (uVar1 < (uint)((int)*(undefined4 **)(local_2c + 0x50) - *piVar15 >> 2)) {
          *(undefined4 **)(local_2c + 0x4c) = puVar9 + 1;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = puVar9[-1];
          }
          *puVar9 = piVar6;
        }
        else {
          local_128 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (local_128 < uVar1 + 1) {
            local_128 = uVar1 + 1;
          }
          puVar7 = (undefined4 *)FUN_0010f82c(local_128 << 2,0);
          puVar12 = puVar7;
          for (puVar11 = (undefined4 *)*piVar15; puVar11 != puVar9; puVar11 = puVar11 + 1) {
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = *puVar11;
            }
            puVar12 = puVar12 + 1;
          }
          puVar11 = (undefined4 *)(((int)puVar9 - *piVar15 & 0xfffffffcU) + (int)puVar7);
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = piVar6;
          }
          puVar12 = *(undefined4 **)(iVar10 + 0x4c);
          puVar11 = (undefined4 *)(((int)puVar9 - *piVar15 & 0xfffffffcU) + (int)puVar7);
          for (; puVar9 != puVar12; puVar9 = puVar9 + 1) {
            puVar11 = puVar11 + 1;
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar9;
            }
          }
          iVar8 = *piVar15;
          iVar13 = *(int *)(iVar10 + 0x4c);
          FUN_0010fa20(iVar8,*(int *)(iVar10 + 0x50) - iVar8 >> 2,0);
          *(undefined4 **)(iVar10 + 0x50) = puVar7 + local_128;
          *(undefined4 **)(iVar10 + 0x4c) = puVar7 + (iVar13 - iVar8 >> 2) + 1;
          *piVar15 = (int)puVar7;
        }
      }
      else {
        *(undefined4 **)(local_2c + 0x4c) = puVar9 + 1;
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = piVar6;
        }
      }
    }
    else if (*(char *)(puVar14 + 2) != (char)piVar6[0x21]) {
      FUN_000028a4(DAT_0006a148);
      goto LAB_00069e04;
    }
    if (local_dc == 0) {
      FUN_000028a4(DAT_0006a154,*puVar14);
      FUN_0008b818(auStack_4c);
      return 0;
    }
    if (*(char *)(puVar14 + 2) == '\0') {
      FUN_000c8c14(piVar6,local_dc);
    }
    else {
      FUN_000c8c48();
    }
    if (*(char *)((int)puVar14 + 9) == '\x01' || *(char *)((int)puVar14 + 9) == '\x03') {
      FUN_000c8b6c(local_140);
      local_140[0] = 0x1000004;
      local_140[1] = 1;
      uStack_124 = 1;
      local_128 = local_140[0];
      puVar9 = (undefined4 *)FUN_00051ca8(local_d8);
      *(undefined1 *)(puVar9 + 7) = 0;
      *puVar9 = uVar4;
      FUN_000037d0(puVar9 + 8,local_140,0x60);
      *puVar9 = local_40;
      cVar2 = (char)piVar6[7];
      if ((cVar2 == '\x01') ||
         ((cVar2 != '\x02' &&
          (((cVar2 != '\x03' && (cVar2 == '\x04')) ||
           (iVar10 = FUN_0015a6b4(piVar6 + 8,local_140), iVar10 == 0)))))) {
        FUN_000037d0(piVar6 + 8,local_140,0x60);
        (**(code **)(*piVar6 + 8))(piVar6);
      }
      local_d8[0] = uVar4;
      FUN_00051d00(local_d8);
    }
    FUN_000c8bd4(piVar6,local_dc,*(undefined1 *)((int)puVar14 + 9));
    iVar5 = iVar5 + 1;
  } while( true );
}

