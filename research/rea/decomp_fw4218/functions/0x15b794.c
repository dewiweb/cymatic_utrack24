// rea decompile_all
// name: FUN_0015b794
// address: 0x15b794
// body: available
// range: 0x15b794-0x15ba1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0015b794(int param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  if (0x1a < param_3 - *param_2) {
    FUN_00154ffc(param_1);
    iVar3 = FUN_0014cab8(param_1 + 0x24,param_2,param_3);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)*param_2;
    iVar3 = *param_2;
    *param_2 = iVar3 + 1;
    if ((int)((uint)*(byte *)(param_1 + 0x30) * 8 + 1) <= param_3 - (iVar3 + 1)) {
      if (*(int *)(param_1 + 0x34) != 0) {
        FUN_00004068(*(int *)(param_1 + 0x34),DAT_0015ba1c);
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      uVar7 = (uint)*(byte *)(param_1 + 0x30);
      if (uVar7 != 0) {
        puVar4 = (undefined4 *)FUN_001c6a94(uVar7 * 0xc + 8,DAT_0015ba20);
        iVar3 = 0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xc;
          uVar2 = DAT_0015ba24;
          puVar4[1] = uVar7;
          iVar3 = FUN_001c70d8(puVar4 + 2,uVar2,0xc,uVar7);
        }
        *(int *)(param_1 + 0x34) = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
        uVar7 = 0;
        if (*(char *)(param_1 + 0x30) != '\0') {
          do {
            puVar6 = (undefined1 *)*param_2;
            iVar3 = *(int *)(param_1 + 0x34) + uVar7 * 0xc;
            if (param_3 - (int)puVar6 < 8) goto LAB_0015ba08;
            uVar1 = *puVar6;
            *param_2 = (int)(puVar6 + 1);
            *(undefined1 *)(iVar3 + 4) = uVar1;
            *(undefined1 *)(iVar3 + 5) = *(undefined1 *)*param_2;
            iVar5 = *param_2;
            *param_2 = iVar5 + 1;
            FUN_000039e0(iVar3 + 6,iVar5 + 1,6);
            uVar7 = uVar7 + 1 & 0xff;
            *param_2 = *param_2 + 6;
          } while (uVar7 < *(byte *)(param_1 + 0x30));
        }
      }
      *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)*param_2;
      iVar3 = *param_2;
      *param_2 = iVar3 + 1;
      if ((int)((uint)*(byte *)(param_1 + 0x38) * 8) <= param_3 - (iVar3 + 1)) {
        if (*(int *)(param_1 + 0x3c) != 0) {
          FUN_00004068(*(int *)(param_1 + 0x3c),DAT_0015ba1c);
          *(undefined4 *)(param_1 + 0x3c) = 0;
        }
        uVar7 = (uint)*(byte *)(param_1 + 0x38);
        if (uVar7 != 0) {
          puVar4 = (undefined4 *)FUN_001c6a94(uVar7 * 0xc + 8,DAT_0015ba20);
          iVar3 = 0;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0xc;
            uVar2 = DAT_0015ba24;
            puVar4[1] = uVar7;
            iVar3 = FUN_001c70d8(puVar4 + 2,uVar2,0xc,uVar7);
          }
          *(int *)(param_1 + 0x3c) = iVar3;
          if (iVar3 == 0) {
            return 0;
          }
          uVar7 = 0;
          if (*(char *)(param_1 + 0x38) != '\0') {
            do {
              puVar6 = (undefined1 *)*param_2;
              iVar3 = *(int *)(param_1 + 0x3c) + uVar7 * 0xc;
              if (param_3 - (int)puVar6 < 8) {
LAB_0015ba08:
                FUN_0014ccec();
                return 0;
              }
              uVar1 = *puVar6;
              *param_2 = (int)(puVar6 + 1);
              *(undefined1 *)(iVar3 + 4) = uVar1;
              *(undefined1 *)(iVar3 + 5) = *(undefined1 *)*param_2;
              iVar5 = *param_2;
              *param_2 = iVar5 + 1;
              FUN_000039e0(iVar3 + 6,iVar5 + 1,6);
              uVar7 = uVar7 + 1 & 0xff;
              *param_2 = *param_2 + 6;
            } while (uVar7 < *(byte *)(param_1 + 0x38));
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

