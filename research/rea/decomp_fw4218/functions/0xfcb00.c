// rea decompile_all
// name: FUN_000fcb00
// address: 0xfcb00
// body: available
// range: 0xfcb00-0xfcd8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000fcb00(int param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r7;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  cVar1 = '\0';
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  if (param_1 != 0 && param_2 != 0) {
    bVar4 = param_3 != (char *)0x0;
    if (bVar4) {
      cVar1 = *param_3;
    }
    bVar5 = cVar1 == '\0';
    iVar2 = FUN_00002fec(param_1,s__u__u__u__u_000fcd90,&local_38,&local_34,&local_30,&local_2c);
    if (((iVar2 == 4) &&
        (iVar2 = FUN_00002fec(param_2,s__u__u__u__u_000fcd90,&local_28,&local_24,&local_20,&local_1c
                             ), iVar2 == 4)) &&
       ((!bVar4 || bVar5 ||
        (iVar2 = FUN_00002fec(param_3,s__u__u__u__u_000fcd90,&local_48,&local_44,&local_40,&local_3c
                             ), iVar2 == 4)))) {
      bVar7 = 0xde < local_38;
      bVar6 = local_38 == 0xdf;
      if (local_38 < 0xe0) {
        bVar7 = 0xfe < local_34;
        bVar6 = local_34 == 0xff;
        unaff_r7 = local_34;
      }
      if (!bVar7 || bVar6) {
        uVar3 = local_30;
        if (local_30 < 0x100) {
          uVar3 = local_2c;
          param_2 = local_2c;
        }
        if ((uVar3 < 0x100) && (local_38 != 0 && local_38 != 0x7f)) {
          if (bVar4 && !bVar5) {
            bVar7 = 0xde < local_48;
            bVar6 = local_48 == 0xdf;
            if (local_48 < 0xe0) {
              bVar7 = 0xfe < local_44;
              bVar6 = local_44 == 0xff;
            }
            if (bVar7 && !bVar6) {
LAB_000fcc90:
              FUN_00002898(DAT_000fcda0);
              return 0;
            }
            uVar3 = local_40;
            if (local_40 < 0x100) {
              uVar3 = local_3c;
            }
            if ((0xff < uVar3) || (local_48 == 0 || local_48 == 0x7f)) goto LAB_000fcc90;
          }
          bVar6 = false;
          iVar2 = 0;
          local_1c = local_28 << 0x18 | local_24 << 0x10 | local_20 << 8 | local_1c;
          uVar3 = local_1c;
          do {
            if ((uVar3 & 1) == 0) {
              if (bVar6) {
                FUN_00002898(DAT_000fcda4);
                return 0;
              }
            }
            else {
              bVar6 = true;
            }
            iVar2 = iVar2 + 1;
            uVar3 = uVar3 >> 1;
          } while (iVar2 < 0x20);
          param_2 = local_38 << 0x18 | unaff_r7 << 0x10 | local_30 << 8 | param_2;
          uVar3 = local_48 << 0x18 | local_44 << 0x10 | local_40 << 8 | local_3c;
          if ((param_2 | local_1c) != 0xffffffff) {
            if ((bVar4 && !bVar5) && ((uVar3 | local_1c) == 0xffffffff)) {
LAB_000fcd70:
              FUN_00002898(DAT_000fcdb0);
              return 0;
            }
            if ((param_2 & ~local_1c) != 0) {
              if (bVar4 && !bVar5) {
                if ((uVar3 & ~local_1c) == 0) goto LAB_000fcd70;
                if ((uVar3 & local_1c) != (local_1c & param_2)) {
                  FUN_00002898(DAT_000fcda8);
                  return 0;
                }
              }
              return 1;
            }
          }
          FUN_00002898(DAT_000fcdac);
          return 0;
        }
      }
      FUN_00002898(DAT_000fcd9c);
      return 0;
    }
  }
  return 0;
}

