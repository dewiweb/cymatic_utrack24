// rea decompile_all
// name: FUN_000b7f30
// address: 0xb7f30
// body: available
// range: 0xb7f30-0xb8143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b7f30(int *param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_90 [4];
  undefined1 auStack_80 [80];
  undefined1 auStack_30 [20];
  
  *param_2 = '\0';
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1,1);
  if (iVar3 == 0) {
    FUN_000028a4(DAT_000b814c);
    return 0;
  }
  if (param_1[0x74] != 0) {
    uVar4 = FUN_000d9c50(auStack_30);
    FUN_000cae8c(local_90,param_1 + 0x60,uVar4,0);
    FUN_000d9c80(auStack_30);
    iVar5 = FUN_0008ab80(param_1,param_1[0x74],local_90);
    local_90[0] = DAT_000b8144;
    if (iVar5 == 0) {
      FUN_000028a4(DAT_000b8150);
      FUN_00085a08(auStack_80);
      FUN_000028a4(DAT_000b8154);
      return 0;
    }
    FUN_00085a08(auStack_80);
  }
  cVar1 = (char)param_1[0x65];
  if (cVar1 == '\0') {
    *param_2 = '\0';
    if (param_1[0x74] != 0) {
      *param_2 = '\x01';
      *(undefined1 *)(iVar3 + 8) = 0xfe;
      uVar4 = (**(code **)(*(int *)param_1[0x74] + 0x14))();
      *(undefined4 *)(iVar3 + 0xc) = uVar4;
      *(undefined4 *)(iVar3 + 0x10) = 1;
      uVar4 = (**(code **)(*(int *)param_1[0x74] + 0x14))();
      *(undefined4 *)(iVar3 + 0x14) = uVar4;
      *(undefined4 *)(iVar3 + 0x18) = 1;
    }
  }
  else {
    if (cVar1 == '\x01') {
      *(undefined1 *)(iVar3 + 8) = 4;
      *param_2 = '\0';
      iVar5 = param_1[0x74];
    }
    else if (cVar1 == '\x02') {
      if ((char)param_1[0x68] == '\x01') {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
      *(undefined1 *)(iVar3 + 8) = uVar2;
      *param_2 = '\0';
      iVar5 = param_1[0x74];
    }
    else {
      if (cVar1 != '\x03') {
        FUN_000028a4(DAT_000b8148);
        return 0;
      }
      *(undefined1 *)(iVar3 + 8) = 6;
      *param_2 = '\0';
      iVar5 = param_1[0x74];
    }
    if (iVar5 != 0) {
      *param_2 = '\x01';
      uVar4 = (**(code **)(*(int *)param_1[0x74] + 0x14))();
      *(undefined4 *)(iVar3 + 0xc) = uVar4;
      *(undefined4 *)(iVar3 + 0x10) = 1;
      uVar4 = (**(code **)(*(int *)param_1[0x74] + 0x14))();
      *(undefined4 *)(iVar3 + 0x14) = uVar4;
      *(undefined4 *)(iVar3 + 0x18) = 1;
    }
  }
  if (*param_2 == '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000b8140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*param_1 + 0x5c))(param_1,1);
  return uVar4;
}

