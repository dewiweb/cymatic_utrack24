// rea decompile_all
// name: FUN_000bcafc
// address: 0xbcafc
// body: available
// range: 0xbcafc-0xbccbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000bcc38) */

undefined4 FUN_000bcafc(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_24;
  undefined1 local_20 [4];
  
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    iVar6 = 0;
    while( true ) {
      uVar2 = (uint)bVar1;
      if (uVar2 == 0) {
        iVar6 = FUN_00041c14(s__cfg_Networking_IpCfg_Config0_000bccf8,&local_24);
        if (iVar6 == 0) {
          FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bcd24,
                       s__cfg_Networking_IpCfg_Config0_000bccf8);
          return 0;
        }
        iVar6 = FUN_00042a98(local_24,s_Hostname_000bcd18,param_2);
        if (iVar6 == 0) {
          FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bcd58,s_Hostname_000bcd18);
        }
        iVar5 = FUN_00043454(local_24,s_AppendMAC_000bcd8c,0);
        if (iVar5 == 0) {
          FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bcd58,s_AppendMAC_000bcd8c);
          FUN_00041dd4(local_24);
        }
        else {
          FUN_00041dd4(local_24);
          uVar3 = DAT_000bcd98;
          if (iVar6 != 0) {
            FUN_001a0700();
            FUN_001da458(param_1 + 0x120,param_2);
            local_20[0] = 0;
            FUN_001da110(param_1 + 0x11c,0,*(undefined4 *)(*(int *)(param_1 + 0x11c) + -4),local_20,
                         0,0,0);
            iVar5 = FUN_0019e4a8(&DAT_000bcd9c);
            iVar6 = DAT_000bcda0;
            if (iVar5 != 0) {
              *(undefined1 *)(DAT_000bcda0 + 0x20) = 0;
              FUN_000038f4(iVar6,*(undefined4 *)(param_1 + 0x120),0x20);
              *(int *)(iVar5 + 0x2c) = iVar6;
            }
            FUN_001a0d18(uVar3);
            return 1;
          }
        }
        return 0;
      }
      uVar4 = (uVar2 | 0x20) - 0x61;
      bVar7 = 0x19 < uVar4;
      if (bVar7) {
        uVar4 = uVar2 - 0x30;
      }
      if ((bVar7 && 9 < uVar4) && (uVar2 != 0x2e && uVar2 != 0x2d)) break;
      iVar6 = iVar6 + 1;
      bVar1 = param_2[iVar6];
    }
  }
  FUN_000028a4(s_ERROR__RavennaConfiguration__Inv_000bccbc,param_2);
  return 0;
}

