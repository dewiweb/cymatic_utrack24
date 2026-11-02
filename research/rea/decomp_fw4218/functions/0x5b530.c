// rea decompile_all
// name: FUN_0005b530
// address: 0x5b530
// body: available
// range: 0x5b530-0x5b6ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005b530(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_28;
  undefined1 auStack_24 [12];
  
  if (*_DAT_0005b700 == param_1) {
    uVar1 = 1;
  }
  else {
    FUN_00203fac(auStack_24);
    uVar1 = FUN_000b4964();
    iVar2 = FUN_000b4840(uVar1,s___USBHighSpeedCtrlService_0005b702 + 2,auStack_24);
    if (iVar2 == 0) {
      FUN_00002898(DAT_0005b71c);
      FUN_000d0508(auStack_24);
      uVar1 = 0;
    }
    else {
      if (*DAT_0005b720 != 0) {
        for (uVar5 = 0; uVar5 < *_DAT_0005b700; uVar5 = uVar5 + 1) {
          piVar4 = (int *)FUN_0022bc84(auStack_24);
          (**(code **)(*piVar4 + 0x28))(piVar4,*DAT_0005b720 + uVar5 * 0xc);
        }
        FUN_001c70fa(*DAT_0005b720,DAT_0005b724);
        FUN_001c6a64();
        *DAT_0005b720 = 0;
      }
      puVar3 = (undefined4 *)FUN_001c6a94(param_1 * 0xc + 8,DAT_0005b728);
      if (puVar3 == (undefined4 *)0x0) {
        iVar2 = 0;
      }
      else {
        puVar3[1] = param_1;
        *puVar3 = 0xc;
        iVar2 = FUN_001c70d8(puVar3 + 2,DAT_0005b72c,0xc,param_1);
      }
      piVar4 = DAT_0005b720;
      *DAT_0005b720 = iVar2;
      if (*piVar4 == 0) {
        FUN_000d0508(auStack_24);
        uVar1 = 0;
      }
      else {
        *_DAT_0005b700 = param_1;
        local_28 = 1;
        for (uVar5 = 0; uVar5 < *_DAT_0005b700; uVar5 = uVar5 + 1) {
          piVar4 = (int *)FUN_0022bc84(auStack_24);
          (**(code **)(*piVar4 + 0x18))
                    (piVar4,*DAT_0005b720 + uVar5 * 0xc,0,&local_28,uVar5 + 2 & 0xff);
        }
        FUN_000d0508(auStack_24);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

