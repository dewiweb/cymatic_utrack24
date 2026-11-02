// rea decompile_all
// name: FUN_00169a70
// address: 0x169a70
// body: available
// range: 0x169a70-0x169bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00169a70(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_30 [4];
  int local_2c;
  
  FUN_001726d4(auStack_30);
  local_2c = param_3;
  iVar2 = FUN_0022befc(param_1,auStack_30);
  if (iVar2 != 0) {
    local_2c = FUN_0015ce1c(0xfffffffd);
    local_2c = local_2c + 1;
  }
  iVar2 = FUN_00205974(param_1,param_2);
  *(int *)(iVar2 + 4) = local_2c;
  uVar3 = FUN_0020572c(param_1,iVar2);
  uVar4 = FUN_001d06b8();
  FUN_0016039c(uVar3,uVar4);
  uVar7 = *(uint *)(param_1 + 4);
  uVar9 = uVar7;
  for (uVar5 = uVar7; (uVar5 != 0 && (uVar9 = uVar5, (*(byte *)(uVar5 + 100) & 0x80) == 0));
      uVar5 = *(uint *)(uVar5 + 0x60)) {
  }
  if (uVar7 != 0) {
    for (uVar5 = *(uint *)(uVar7 + 0x5c); uVar5 != 0; uVar5 = *(uint *)(uVar5 + 0x5c)) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      do {
        if (uVar7 == 0) {
          uVar8 = *(uint *)(param_1 + 4);
          if (uVar8 != 0) {
            uVar5 = *(uint *)(uVar8 + 0x5c);
          }
          if (uVar8 != 0 && uVar5 != 0) {
            do {
              uVar8 = uVar5;
              uVar5 = *(uint *)(uVar8 + 0x5c);
            } while (*(uint *)(uVar8 + 0x5c) != 0);
          }
        }
        else {
          uVar5 = (uint)*(byte *)(uVar7 + 100);
          uVar8 = *(uint *)(uVar7 + 0x60);
          uVar1 = uVar8;
          if ((*(byte *)(uVar7 + 100) & 0x80) == 0) {
            do {
              uVar8 = uVar1;
              if (uVar8 != 0) {
                uVar5 = *(uint *)(uVar8 + 0x5c);
              }
              uVar1 = uVar5;
            } while (uVar8 != 0 && uVar5 != 0);
          }
        }
        uVar5 = *(uint *)(uVar7 + 0x10);
        if (uVar5 == uVar3) {
          iVar2 = FUN_00205974(param_1,uVar7);
          *(int *)(iVar2 + 4) = local_2c;
          uVar4 = FUN_0020572c(param_1,iVar2);
          uVar6 = FUN_001d06b8();
          uVar5 = FUN_0016039c(uVar4,uVar6);
        }
        bVar10 = uVar7 != uVar9;
        if (bVar10) {
          uVar7 = uVar8;
        }
      } while (bVar10 && uVar8 != 0);
    }
  }
  return 0;
}

