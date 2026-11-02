// rea decompile_all
// name: FUN_000825cc
// address: 0x825cc
// body: available
// range: 0x825cc-0x8276b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_000825cc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined1 uVar6;
  int iVar7;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = DAT_0008276c;
  local_2c = DAT_0008276c;
  local_28 = DAT_0008276c;
  local_24 = DAT_0008276c;
  iVar1 = FUN_0006e06c(param_1,s_ARCTransportSPI_00082770,0);
  piVar2 = (int *)FUN_0006762c(iVar1 + 0xc0);
  iVar1 = _DAT_00082780;
  piVar5 = piVar2 + -0x30;
  piVar2[2] = -1;
  *piVar5 = iVar1;
  *piVar2 = iVar1 + 0x30;
  piVar2[3] = -1;
  *(undefined2 *)(piVar2 + 4) = 0;
  iVar7 = -1;
  uVar6 = 0xff;
  iVar1 = FUN_001813bc(s____cfg_AppSettings_ARC_SPI_00082782 + 2);
  if (iVar1 == -1) {
    FUN_000028a4(s_ERROR__ARCTransportSPI__Request_p_00082854);
    goto LAB_000826bc;
  }
  iVar3 = FUN_00180f0c(iVar1,s_RequestPinActiveLevel_000827a0,&local_30,0x10);
  if (iVar3 < 1) {
    pcVar4 = s_ERROR__ARCTransportSPI__Request_p_000827b8;
LAB_00082690:
    FUN_000028a4(pcVar4);
    uVar6 = 0xff;
  }
  else {
    iVar3 = FUN_00003960(&local_30,&DAT_000827f4);
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    else {
      iVar3 = FUN_00003960(&local_30,&DAT_000827fc);
      if (iVar3 != 0) {
        pcVar4 = s_ERROR__ARCTransportSPI__Request_p_00082800;
        goto LAB_00082690;
      }
      uVar6 = 0;
    }
    iVar7 = FUN_001810f8(iVar1,s_RequestPinGPIONumber_0008283c);
  }
  FUN_00180424(iVar1);
LAB_000826bc:
  local_20 = 8;
  iVar1 = FUN_000151a4(s__dev_spiSlave_00082890,1);
  piVar2[2] = iVar1;
  if (iVar1 == -1) {
    thunk_FUN_000028a4(s_ERROR__ARCTransportSPI__Could_no_000828a0);
  }
  local_1c = 2000;
  iVar1 = FUN_0001545c(piVar2[2],1,&local_20);
  if (iVar1 != 0) {
    thunk_FUN_000028a4(s_ERROR__ARCTransportSPI__Could_no_000828e0);
  }
  local_1c = 1000;
  iVar1 = FUN_0001545c(piVar2[2],3,&local_20);
  if (iVar1 != 0) {
    thunk_FUN_000028a4(s_ERROR__ARCTransportSPI__Could_no_00082920);
  }
  if (iVar7 != -1) {
    local_30 = 0xc;
    local_28 = CONCAT31(local_28._1_3_,uVar6);
    local_2c = iVar7;
    iVar1 = FUN_0001545c(piVar2[2],0xb,&local_30);
    if (iVar1 != 0) {
      thunk_FUN_000028a4(s_ERROR__ARCTransportSPI__Could_no_00082960);
    }
  }
  FUN_0006e024(piVar5);
  return piVar5;
}

