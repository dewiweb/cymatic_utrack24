// rea decompile_all
// name: FUN_000f2cdc
// address: 0xf2cdc
// body: available
// range: 0xf2cdc-0xf2f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f2cdc(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  if (*DAT_000f2f24 == '\0') {
    uVar2 = 1;
  }
  else {
    if (*DAT_000f2f28 < 2) {
      bVar1 = false;
      iVar3 = FUN_0022dff0(DAT_000f2f2c);
      if (iVar3 != 0) {
        for (puVar4 = (undefined4 *)FUN_002399d0(DAT_000f2f2c);
            puVar7 = (undefined4 *)FUN_00239990(DAT_000f2f2c), puVar7 != puVar4; puVar4 = puVar4 + 3
            ) {
          uVar5 = *puVar4;
          uVar6 = FUN_00006604(uVar5,*(undefined4 *)(DAT_000f2f30 + 0x1c));
          if ((DAT_000f2f34[*DAT_000f2f28] + 1 < uVar6) &&
             ((*DAT_000f2f28 != 1 || (*DAT_000f2f34 <= uVar6)))) {
            uVar6 = FUN_00006604(uVar5,*(undefined4 *)(DAT_000f2f30 + 0x1c));
            DAT_000f2f34[*DAT_000f2f28] = uVar6;
            FUN_00081bc0(param_1 + 0x14,*DAT_000f2f28,*(undefined4 *)(DAT_000f2f30 + 0x80),
                         DAT_000f2f34[*DAT_000f2f28],0,1);
            bVar1 = true;
            break;
          }
        }
      }
      FUN_000945d0(uVar2,0);
      if ((!bVar1) && (*DAT_000f2f28 < 2)) {
        if (*DAT_000f2f28 == 0) {
          DAT_000f2f34[*DAT_000f2f28] = *(int *)(DAT_000f2f30 + 0x80) - 1;
          FUN_00081bc0(param_1 + 0x14,*DAT_000f2f28,*(undefined4 *)(DAT_000f2f30 + 0x80),
                       DAT_000f2f34[*DAT_000f2f28],0,1);
        }
        else {
          DAT_000f2f34[*DAT_000f2f28] = *(uint *)(DAT_000f2f30 + 0x80);
          FUN_00081bc0(param_1 + 0x14,*DAT_000f2f28,*(undefined4 *)(DAT_000f2f30 + 0x80),
                       DAT_000f2f34[*DAT_000f2f28],0,1);
        }
      }
    }
    else {
      FUN_0009e424(param_1,DAT_000f2f34[1] * *(int *)(DAT_000f2f30 + 0x1c));
    }
    uVar2 = 0;
  }
  return uVar2;
}

