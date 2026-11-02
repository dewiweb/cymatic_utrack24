// rea decompile_all
// name: FUN_0001f744
// address: 0x1f744
// body: available
// range: 0x1f744-0x1f877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001f744(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                char *param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_328 [256];
  undefined1 auStack_228 [256];
  undefined1 auStack_128 [260];
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  char *local_18;
  
  local_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  pcVar2 = (char *)FUN_001952a0(0x100);
  iVar1 = DAT_0001f878;
  iVar4 = iVar1;
  if (((pcVar2 != (char *)0x0) && (iVar4 = DAT_0001f940, local_18 != (char *)0x0)) &&
     (*local_18 != '\0')) {
    FUN_000038f4(pcVar2,local_18,0x100);
    pcVar2[0xff] = '\0';
    local_328[0] = 0;
    uVar3 = FUN_0001dbec(pcVar2);
    iVar4 = DAT_0001f940;
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        iVar4 = FUN_000034d0(pcVar2);
        iVar5 = FUN_0001b544(local_328,pcVar2 + iVar4 + 1);
        iVar4 = DAT_0001f940;
        if (iVar5 == 0) goto LAB_0001f844;
      }
      iVar4 = DAT_0001f940;
      if (((*pcVar2 != '\0') &&
          (iVar5 = FUN_0001b544(local_328,pcVar2), iVar4 = DAT_0001f940, iVar5 != 0)) &&
         ((*pcVar2 != '\0' &&
          (iVar5 = FUN_0002495a(auStack_128,pcVar2), iVar4 = DAT_0001f940, iVar5 != 0)))) {
        pcVar7 = param_5;
        if (*param_5 == '\0') {
          pcVar7 = s_local__0001f904;
        }
        iVar5 = FUN_0002495a(auStack_228,pcVar7);
        iVar4 = DAT_0001f940;
        if ((iVar5 != 0) &&
           (puVar6 = (undefined4 *)FUN_001952a0(0x26c), iVar4 = iVar1, puVar6 != (undefined4 *)0x0))
        {
          *puVar6 = DAT_0001f90c;
          puVar6[1] = param_6;
          puVar6[2] = param_7;
          puVar6[0x9a] = puVar6;
          iVar4 = FUN_00199710(_DAT_0001f918,puVar6 + 3,local_328,auStack_228);
          if (iVar4 == 0) {
            *local_24 = puVar6;
            FUN_00195340(pcVar2);
            return 0;
          }
          FUN_00195340(puVar6);
        }
      }
    }
  }
LAB_0001f844:
  FUN_00024642(0,s_DNSServiceBrowse___s_____s___fai_0001f944,local_18,param_5);
  FUN_00195340(pcVar2);
  return iVar4;
}

