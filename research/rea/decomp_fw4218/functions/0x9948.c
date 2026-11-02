// rea decompile_all
// name: FUN_00009948
// address: 0x9948
// body: available
// range: 0x9948-0x9c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00009948(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_14;
  
  local_14 = param_2;
  FUN_001f00bc(param_1 + 0x118);
  FUN_00002898(s_Domain_Info_00009c2c);
  FUN_00002898(s_____________00009c3c);
  FUN_00002898(s_Sync_domain_id___d_00009c4c,local_14);
  puVar1 = (undefined4 *)FUN_00233d2c(param_1 + 0x15c,&local_14);
  FUN_00002898(s_m_pSystemSynchSrc__0x_08x_00009c68,*puVar1);
  piVar2 = (int *)FUN_00233d2c(param_1 + 0x15c,&local_14);
  if (*piVar2 != 0) {
    piVar2 = (int *)FUN_00233d2c(param_1 + 0x15c,&local_14);
    FUN_00002898(s_getProcessId_____d_00009c88,*(undefined4 *)(*piVar2 + 0xc));
    piVar2 = (int *)FUN_00233d2c(param_1 + 0x15c,&local_14);
    FUN_00002898(s_getProcessLocalId_____d_00009ca4,*(undefined4 *)(*piVar2 + 0x10));
    puVar1 = (undefined4 *)FUN_00233d2c(param_1 + 0x15c,&local_14);
    uVar3 = FUN_0000a2e8(*puVar1);
    FUN_00002898(s_getSynchDomain_____d_00009cc0,uVar3);
    piVar2 = (int *)FUN_00233d2c(param_1 + 0x15c,&local_14);
    FUN_00002898(s_getState_____d_00009cdc,*(undefined1 *)(*piVar2 + 0x20));
    puVar1 = (undefined4 *)FUN_00233d2c(param_1 + 0x15c,&local_14);
    uVar3 = FUN_0000a2f0(*puVar1);
    FUN_00002898(s_getQueueSize_____d_00009cf8,uVar3);
    puVar1 = (undefined4 *)FUN_00233d2c(param_1 + 0x15c,&local_14);
    uVar3 = FUN_0000a310(*puVar1);
    FUN_00002898(s_getQueueMemType_____d_00009d14,uVar3);
    puVar1 = (undefined4 *)FUN_00233d2c(param_1 + 0x15c,&local_14);
    uVar3 = FUN_0000a388(*puVar1);
    FUN_00002898(s_getSynchInterface_____d_00009d30,uVar3);
  }
  iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
  FUN_00002898(s_m_pStreamSynchronizer__0x_08x_00009d4c,*(undefined4 *)(iVar4 + 4));
  iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
  if (*(int *)(iVar4 + 4) != 0) {
    iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
    uVar3 = (**(code **)(**(int **)(iVar4 + 4) + 8))();
    FUN_00002898(s_getProcessId_____d_00009c88,uVar3);
    iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
    uVar3 = (**(code **)(**(int **)(iVar4 + 4) + 0xc))();
    FUN_00002898(s_getProcessLocalId_____d_00009ca4,uVar3);
    iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
    uVar3 = (**(code **)(**(int **)(iVar4 + 4) + 0x34))();
    FUN_00002898(s_getSynchDomain_____d_00009cc0,uVar3);
    iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
    FUN_00002898(s_getState_____d_00009cdc,*(undefined1 *)(*(int *)(iVar4 + 4) + 0x24));
    iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
    uVar3 = (**(code **)(**(int **)(iVar4 + 4) + 0x2c))();
    FUN_00002898(s_getIsoChannel_____d_00009d6c,uVar3);
    iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
    uVar3 = (**(code **)(**(int **)(iVar4 + 4) + 0x10))();
    FUN_00002898(s_getStreamDirection_____d_00009d88,uVar3);
  }
  iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
  FUN_00002898(s_m_inputStreams_size_____d_00009da4,*(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 8) >> 2
              );
  iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
  FUN_00002898(s_m_outputStreams_size_____d_00009dc0,
               *(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14) >> 2);
  iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
  FUN_00002898(s_m_bSynchDomainStopped___d_00009ddc,*(undefined1 *)(iVar4 + 0x20));
  iVar4 = FUN_00233d2c(param_1 + 0x15c,&local_14);
  FUN_00002898(s_m_eDomainSynchMode___d_00009df8,(int)*(char *)(iVar4 + 0x2c));
  FUN_001f06d4(param_1 + 0x118);
  return;
}

