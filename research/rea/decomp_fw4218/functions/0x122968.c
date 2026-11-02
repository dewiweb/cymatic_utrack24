// rea decompile_all
// name: FUN_00122968
// address: 0x122968
// body: available
// range: 0x122968-0x122acd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001229ee) */
/* WARNING: Removing unreachable block (ram,0x001229f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00122968(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  undefined1 auStack_50 [8];
  int *local_48;
  int local_44;
  int *local_3c;
  int *local_38;
  int local_2c;
  int *local_24;
  
  puVar2 = (undefined4 *)FUN_000b1210(auStack_50);
  *puVar2 = _DAT_00122ad0;
  uVar3 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar3,s___AudioHWService_00122ad2 + 2,auStack_50);
  if (iVar4 == 0) {
LAB_00122a84:
    FUN_000b1228(auStack_50);
    return 0;
  }
  iVar4 = 0;
  local_24 = (int *)(param_1 + 0x18);
  do {
    if (*(int *)(*(int *)(param_1 + 4) + iVar4 * 4 + 0x68) != -1) {
      local_44 = (**(code **)(*local_48 + 0x70))();
      piVar1 = local_24;
      if (local_44 == 0) goto LAB_00122a84;
      piVar10 = (int *)local_24[1];
      if (piVar10 == (int *)local_24[2]) {
        uVar12 = (int)piVar10 - *local_24 >> 2;
        local_38 = piVar10;
        if (uVar12 < (uint)(local_24[2] - *local_24 >> 2)) {
          local_24[1] = (int)(piVar10 + 1);
          if (piVar10 != (int *)0x0) {
            *piVar10 = piVar10[-1];
          }
          *piVar10 = local_44;
        }
        else {
          uVar8 = (uVar12 >> 1) + uVar12 + (uVar12 >> 3);
          uVar5 = uVar12 + 1;
          if (uVar12 + 1 <= uVar8) {
            uVar5 = uVar8;
          }
          local_2c = uVar5 << 2;
          local_3c = (int *)FUN_00173860(local_2c,0);
          piVar6 = local_3c;
          for (piVar10 = (int *)*piVar1; piVar10 != local_38; piVar10 = piVar10 + 1) {
            if (piVar6 != (int *)0x0) {
              *piVar6 = *piVar10;
            }
            piVar6 = piVar6 + 1;
          }
          piVar10 = (int *)(((int)local_38 - *piVar1 & 0xfffffffcU) + (int)local_3c);
          if (piVar10 != (int *)0x0) {
            *piVar10 = local_44;
          }
          piVar11 = (int *)piVar1[1];
          piVar10 = (int *)(((int)local_38 - *piVar1 & 0xfffffffcU) + (int)local_3c);
          for (piVar6 = local_38; piVar6 != piVar11; piVar6 = piVar6 + 1) {
            piVar10 = piVar10 + 1;
            if (piVar10 != (int *)0x0) {
              *piVar10 = *piVar6;
            }
          }
          iVar9 = piVar1[1];
          iVar7 = *piVar1;
          FUN_00173a54(iVar7,piVar1[2] - iVar7 >> 2,0);
          *piVar1 = (int)local_3c;
          piVar1[1] = (int)(local_3c + (iVar9 - iVar7 >> 2) + 1);
          piVar1[2] = local_2c + (int)local_3c;
        }
      }
      else {
        local_24[1] = (int)(piVar10 + 1);
        if (piVar10 != (int *)0x0) {
          *piVar10 = local_44;
        }
      }
    }
    iVar4 = iVar4 + 1;
    if (0xf < iVar4) {
      FUN_000b1228(auStack_50);
      return 1;
    }
  } while( true );
}

