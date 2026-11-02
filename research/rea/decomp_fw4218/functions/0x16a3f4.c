// rea decompile_all
// name: FUN_0016a3f4
// address: 0x16a3f4
// body: available
// range: 0x16a3f4-0x16a5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016a3f4(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined1 auStack_5c [60];
  
  puVar1 = DAT_0016a5b4;
  uVar6 = *(uint *)(param_1 + 4);
  if (uVar6 == 0) {
    return;
  }
  for (uVar3 = *(uint *)(uVar6 + 0x5c); uVar3 != 0; uVar3 = *(uint *)(uVar3 + 0x5c)) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    do {
      if (uVar6 == 0) {
        uVar7 = *(uint *)(param_1 + 4);
        if (uVar7 != 0) {
          uVar3 = *(uint *)(uVar7 + 0x5c);
        }
        if (uVar7 != 0 && uVar3 != 0) {
          do {
            uVar7 = uVar3;
            uVar3 = *(uint *)(uVar7 + 0x5c);
          } while (*(uint *)(uVar7 + 0x5c) != 0);
        }
      }
      else {
        uVar3 = (uint)*(byte *)(uVar6 + 100);
        uVar7 = *(uint *)(uVar6 + 0x60);
        uVar2 = uVar7;
        if ((*(byte *)(uVar6 + 100) & 0x80) == 0) {
          do {
            uVar7 = uVar2;
            if (uVar7 != 0) {
              uVar3 = *(uint *)(uVar7 + 0x5c);
            }
            uVar2 = uVar3;
          } while (uVar7 != 0 && uVar3 != 0);
        }
      }
      uVar3 = (uint)*(byte *)(uVar6 + 0x58);
      if ((*(byte *)(uVar6 + 0x58) & 0xf) == 0) {
        iVar4 = FUN_00205974(param_1);
        iVar5 = FUN_001bed34();
        if (iVar5 != 0) {
          uStack_74 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_6c = 0;
          uStack_66 = 0;
          uStack_64 = 0;
          uStack_5e = 0;
          iVar5 = FUN_001727f0(auStack_5c);
          *(undefined4 *)(iVar5 + 0x20) = 0;
          *(undefined4 *)(iVar5 + 0x24) = 0;
          *(undefined1 *)(iVar5 + 0x35) = 1;
          FUN_0015111c(iVar5 + -0x1c);
          if ((*(byte *)(iVar4 + 0x58) & 0x40) == 0) {
            FUN_0014f7c4(&uStack_78,iVar4,3);
          }
          else {
            FUN_0014f7c4(&uStack_78,iVar4,2);
          }
          (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc),&uStack_78);
          (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(int **)(param_1 + 0xc),&uStack_78);
          FUN_0015111c(&uStack_78);
          FUN_0014ca10(&uStack_64);
          FUN_0014ca10(&uStack_6c);
          uStack_74 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
        }
        if (iVar4 != 0) {
          iVar4 = FUN_00171ea4(iVar4 + 0x4c);
          FUN_001c6a78(iVar4 + -0x4c);
        }
        uVar3 = *puVar1 - 1;
        *puVar1 = uVar3;
        *(uint *)(param_1 + 8) = uVar7;
      }
      uVar6 = uVar7;
    } while (uVar7 != 0);
    return;
  }
  return;
}

