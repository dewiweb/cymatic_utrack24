// rea decompile_all
// name: FUN_00022354
// address: 0x22354
// body: available
// range: 0x22354-0x224e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00022354(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  
  puVar1 = _DAT_000224e8;
  if (param_3 == 0) {
    return 0;
  }
  if ((*_DAT_000224e8 & 6) != 2) {
    return 0;
  }
  _DAT_000224e8[2] = param_2;
  puVar1[3] = param_4;
  puVar1[1] = param_3;
  iVar2 = FUN_0009175c();
  uVar3 = FUN_001ba140(iVar2 + 4,2);
  uVar4 = FUN_001ba130(iVar2 + 4,2);
  uVar5 = FUN_001f01c4(0x80,1);
  puVar1[0x43] = uVar5;
  if (uVar5 == 0) {
    pcVar6 = s_bA_ERROR__CPEth_StartReceive__fa_000224e9 + 3;
LAB_000224a4:
    FUN_00002898(pcVar6);
  }
  else {
    puVar1[0x33] = 0;
    iVar2 = FUN_001cf080(puVar1 + 0x33,s_VNM_Receive_00022524,4,uVar5,0x20);
    if (iVar2 != 0) {
      FUN_00002898(s_ERROR__CPEth_StartReceive__faile_00022530);
      FUN_001eecc8(puVar1[0x43]);
      puVar1[0x43] = 0;
      return 0;
    }
    uVar5 = FUN_001f01c4(uVar3,1);
    puVar1[0x32] = uVar5;
    if (uVar5 == 0) {
      FUN_00002898(s_ERROR__CPEth_StartReceive__faile_000225d8);
    }
    else {
      FUN_00003c08(uVar5,uVar3,0x32);
      puVar1[4] = 0;
      iVar2 = FUN_001cf8e8(puVar1 + 4,s_VNM_Receive_00022524,_DAT_00022564,0,puVar1[0x32],uVar3,
                           uVar4,uVar4,1,1);
      if (iVar2 == 0) {
        uVar3 = FUN_001db66c(0);
        iVar2 = FUN_001deb00(uVar3,_DAT_0002259c);
        if (iVar2 == 0) {
          *puVar1 = *puVar1 | 4;
          return 1;
        }
        pcVar6 = s__ERROR__CPEth_StartReceive__fail_0002259f + 1;
        goto LAB_000224a4;
      }
      FUN_00002898(s__ERROR__CPEth_StartReceive__fail_00022567 + 1);
      FUN_001eecc8(puVar1[0x32]);
      puVar1[0x32] = 0;
    }
    FUN_001cf17c(puVar1 + 0x33);
    FUN_001eecc8(puVar1[0x43]);
    puVar1[0x43] = 0;
  }
  return 0;
}

