// rea decompile_all
// name: FUN_001a9430
// address: 0x1a9430
// body: available
// range: 0x1a9430-0x1a965b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001a9430(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = _DAT_001a9668;
  puVar6 = DAT_001a9664;
  *DAT_001a9664 = s_accept_001a965c;
  puVar6[1] = uVar2;
  puVar6[2] = 1;
  puVar6[3] = s__accept_encoding_001a966b + 1;
  puVar6[5] = 1;
  puVar6[4] = _DAT_001a967c;
  puVar6[6] = s__accept_language_001a967f + 1;
  puVar6[8] = 1;
  puVar6[7] = _DAT_001a9690;
  puVar6[9] = s__alert_info_001a9693 + 1;
  puVar6[0xb] = 1;
  puVar6[10] = _DAT_001a96a0;
  puVar6[0xc] = s__allow_001a96a3 + 1;
  puVar6[0xe] = 1;
  puVar6[0xd] = _DAT_001a96ac;
  puVar6[0xf] = s__authentication_info_001a96af + 1;
  puVar6[0x11] = 1;
  puVar6[0x10] = _DAT_001a96c4;
  puVar6[0x12] = s__authorization_001a96c7 + 1;
  puVar6[0x14] = 1;
  puVar6[0x13] = DAT_001a96d8;
  puVar6[0x15] = &DAT_001a96dc;
  puVar6[0x17] = 0;
  puVar6[0x16] = _DAT_001a96e0;
  puVar6[0x18] = s__call_id_001a96e3 + 1;
  puVar6[0x1a] = 0;
  puVar6[0x19] = _DAT_001a96ec;
  puVar6[0x1b] = s__call_info_001a96ef + 1;
  puVar6[0x1d] = 1;
  puVar6[0x1c] = _DAT_001a96fc;
  puVar6[0x1e] = s__contact_001a96ff + 1;
  uVar2 = _DAT_001a970c;
  iVar8 = DAT_001a9708;
  *(undefined4 *)(DAT_001a9708 + 4) = _DAT_001a970c;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar6[0x21] = s__content_encoding_001a970f + 1;
  iVar8 = DAT_001a9724;
  *(undefined4 *)(DAT_001a9724 + 4) = _DAT_001a9728;
  *(undefined4 *)(iVar8 + 8) = 1;
  puVar6[0x24] = s__content_length_001a972b + 1;
  uVar3 = _DAT_001a9740;
  iVar8 = DAT_001a973c;
  *(undefined4 *)(DAT_001a973c + 4) = _DAT_001a9740;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar6[0x27] = s__content_type_001a9743 + 1;
  iVar8 = DAT_001a9754;
  *(undefined4 *)(DAT_001a9754 + 4) = _DAT_001a96e0;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar6[0x2a] = &DAT_001a9758;
  iVar8 = DAT_001a9760;
  *(undefined4 *)(DAT_001a9760 + 4) = DAT_001a9764;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar6[0x2d] = &DAT_001a9768;
  iVar8 = _DAT_001a976c;
  *(undefined4 *)(_DAT_001a976c + 4) = _DAT_001a9728;
  *(undefined4 *)(iVar8 + 8) = 1;
  puVar6[0x30] = s_wI_error_info_001a976d + 3;
  iVar8 = DAT_001a977c;
  *(undefined4 *)(DAT_001a977c + 4) = DAT_001a9780;
  *(undefined4 *)(iVar8 + 8) = 1;
  puVar6[0x33] = &DAT_001a9784;
  uVar4 = DAT_001a978c;
  iVar8 = DAT_001a9788;
  *(undefined4 *)(DAT_001a9788 + 4) = DAT_001a978c;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar6[0x36] = &DAT_001a9790;
  iVar8 = DAT_001a9798;
  *(undefined4 *)(DAT_001a9798 + 4) = uVar4;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar6[0x39] = &DAT_001a979c;
  iVar8 = DAT_001a97a0;
  *(undefined4 *)(DAT_001a97a0 + 4) = _DAT_001a96ec;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar6[0x3c] = &DAT_001a97a4;
  iVar8 = DAT_001a97a8;
  *(undefined4 *)(DAT_001a97a8 + 4) = uVar3;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar6[0x3f] = &DAT_001a97ac;
  uVar3 = s_TwI_mime_version_001a97b0._0_4_;
  puVar1 = DAT_001a9664;
  *(undefined4 *)(s_TwI_mime_version_001a97b0._0_4_ + 4) = uVar2;
  *(undefined4 *)(uVar3 + 8) = 0;
  puVar6[0x42] = s_TwI_mime_version_001a97b0 + 4;
  iVar8 = DAT_001a97c4;
  *(undefined4 *)(DAT_001a97c4 + 4) = _DAT_001a97c8;
  *(undefined4 *)(iVar8 + 8) = 1;
  puVar6[0x45] = s__proxy_authenticate_001a97cb + 1;
  iVar8 = DAT_001a97e0;
  *(undefined4 *)(DAT_001a97e0 + 4) = _DAT_001a97e4;
  *(undefined4 *)(iVar8 + 8) = 1;
  puVar6[0x48] = s__proxy_authentication_info_001a97e7 + 1;
  puVar6[0x49] = _DAT_001a9804;
  puVar6[0x4a] = 1;
  puVar6[0x4b] = s__proxy_authorization_001a9807 + 1;
  puVar6[0x4d] = 1;
  puVar6[0x4c] = _DAT_001a981c;
  puVar1[0x4e] = s__record_route_001a981f + 1;
  uVar2 = _DAT_001a9834;
  iVar8 = DAT_001a9830;
  *(undefined4 *)(DAT_001a9830 + 8) = 1;
  *(undefined4 *)(iVar8 + 4) = uVar2;
  puVar1[0x51] = s__route_001a9837 + 1;
  uVar2 = DAT_001a9844;
  iVar8 = DAT_001a9840;
  *(undefined4 *)(DAT_001a9840 + 8) = 1;
  *(undefined4 *)(iVar8 + 4) = uVar2;
  puVar1[0x54] = &DAT_001a9848;
  uVar2 = DAT_001a9850;
  iVar8 = DAT_001a984c;
  *(undefined4 *)(DAT_001a984c + 4) = DAT_001a9850;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar1[0x57] = &DAT_001a9854;
  iVar8 = DAT_001a9858;
  *(undefined4 *)(DAT_001a9858 + 4) = uVar2;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar1[0x5a] = &DAT_001a985c;
  iVar5 = DAT_001a988c;
  uVar2 = DAT_001a9864;
  iVar8 = DAT_001a9860;
  *(undefined4 *)(DAT_001a9860 + 4) = DAT_001a9864;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar1[0x5d] = &DAT_001a9868;
  iVar8 = _DAT_001a986c;
  iVar7 = 0x4b;
  *(undefined4 *)(_DAT_001a986c + 4) = uVar2;
  *(undefined4 *)(iVar8 + 8) = 0;
  puVar1[0x60] = s_wI_www_authenticate_001a986d + 3;
  uVar2 = DAT_001a9888;
  iVar8 = DAT_001a9884;
  *(undefined4 *)(DAT_001a9884 + 8) = 1;
  *(undefined4 *)(iVar8 + 4) = uVar2;
  puVar6 = (undefined4 *)(iVar5 + -4);
  do {
    puVar6[1] = 0xffffffff;
    puVar6 = puVar6 + 2;
    iVar7 = iVar7 + -1;
    *puVar6 = 0xffffffff;
    iVar8 = 0;
  } while (iVar7 != 0);
  do {
    FUN_001a4508(puVar1[iVar8 * 3]);
    iVar7 = FUN_0016dc24();
    if (*(int *)(iVar5 + iVar7 * 4) != -1) {
      return 0xffffffff;
    }
    *(int *)(iVar5 + iVar7 * 4) = iVar8;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x21);
  return 0;
}

