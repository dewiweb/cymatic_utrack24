// rea decompile_all
// name: FUN_000feb2c
// address: 0xfeb2c
// body: available
// range: 0xfeb2c-0xfecf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000fec6c) */

undefined4 FUN_000feb2c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_2c;
  undefined1 local_28 [8];
  
  if (param_2 != (byte *)0x0) {
    uVar4 = (uint)*param_2;
    iVar5 = 0;
    if (uVar4 != 0) {
      do {
        uVar2 = (uVar4 | 0x20) - 0x61;
        bVar6 = 0x19 < uVar2;
        if (bVar6) {
          uVar2 = uVar4 - 0x30;
        }
        if ((bVar6 && 9 < uVar2) && (uVar4 != 0x2e && uVar4 != 0x2d)) goto LAB_000febc4;
        iVar5 = iVar5 + 1;
        uVar4 = (uint)param_2[iVar5];
      } while (uVar4 != 0);
      if (iVar5 != 0) {
        iVar5 = FUN_000466b0(s__cfg_Networking_IpCfg_Config0_000fecf4,&local_2c);
        if (iVar5 == 0) {
          FUN_00002898(s_ERROR__RavennaConfiguration__Cou_000fed5c,
                       s__cfg_Networking_IpCfg_Config0_000fecf4);
          return 0;
        }
        iVar5 = FUN_00048c6c(local_2c,s_Hostname_000fed14,param_2);
        if (iVar5 == 0) {
          FUN_00002898(s_ERROR__RavennaConfiguration__Cou_000fed90,s_Hostname_000fed14);
        }
        iVar3 = FUN_000498cc(local_2c,s_AppendMAC_000fedc4,0);
        if (iVar3 == 0) {
          FUN_00002898(s_ERROR__RavennaConfiguration__Cou_000fed90,s_AppendMAC_000fedc4);
          FUN_00046b8c(local_2c);
        }
        else {
          FUN_00046b8c(local_2c);
          uVar1 = DAT_000fedd0;
          if (iVar5 != 0) {
            FUN_001f00bc();
            FUN_002329fc(param_1 + 0x120,param_2);
            local_28[0] = 0;
            FUN_00232724(param_1 + 0x11c,0,*(undefined4 *)(*(int *)(param_1 + 0x11c) + -4),local_28,
                         0,0,0);
            iVar3 = FUN_001ee438(&DAT_000fedd4);
            iVar5 = DAT_000fedd8;
            if (iVar3 != 0) {
              *(undefined1 *)(DAT_000fedd8 + 0x20) = 0;
              FUN_00003cac(iVar5,*(undefined4 *)(param_1 + 0x120),0x20);
              *(int *)(iVar3 + 0x2c) = iVar5;
            }
            *(undefined1 *)(param_1 + 0x254) = 1;
            FUN_001f06d4(uVar1);
            return 1;
          }
        }
        return 0;
      }
    }
  }
LAB_000febc4:
  FUN_00002898(s_ERROR__RavennaConfiguration__Inv_000fed20,param_2);
  return 0;
}

