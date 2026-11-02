// rea decompile_all
// name: FUN_000a16c0
// address: 0xa16c0
// body: available
// range: 0xa16c0-0xa1917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a16c0(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c [3];
  
  uVar4 = (**(code **)(*param_1 + 0xbc))(param_1);
  iVar5 = FUN_0004669c(uVar4,0);
  if (iVar5 == 0) {
    FUN_000028a4(DAT_000a191c);
    return;
  }
  local_48 = *(undefined4 *)(param_2 + 0x2c);
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_00156bf8(&local_3c,param_2);
    iVar5 = FUN_00002f10(local_3c,s__u__u__u__u_000a1920,&local_38,&local_34,&local_30,local_2c);
    FUN_001da314(&local_3c);
    uVar4 = DAT_000a192c;
    if ((iVar5 != 4) || (uVar4 = DAT_000a1930, (local_38 & 0xf0) != 0xe0)) {
      FUN_000028a4(uVar4);
      return;
    }
    sVar3 = FUN_001569ec(param_2);
    uVar1 = *(undefined1 *)(param_2 + 0x3e);
    iVar5 = FUN_001db8f8(param_1 + 0x4f,&local_48);
    *(undefined1 *)(iVar5 + 0x14) = 0x62;
    uVar2 = FUN_001587bc(param_1);
    *(undefined1 *)(iVar5 + 0xc) = uVar2;
    *(uint *)(iVar5 + 0x1c) =
         local_2c[0] << 0x18 | (local_30 & 0xff) << 0x10 | (local_34 & 0xff) << 8 | local_38 & 0xff;
    *(short *)(iVar5 + 0x20) = sVar3;
    *(short *)(iVar5 + 0x22) = (short)local_48 + sVar3;
    *(undefined1 *)(iVar5 + 0x17) = uVar1;
    FUN_001569a8(&local_3c,param_2);
    FUN_001da4a8(iVar5 + 0x24,&local_3c);
    FUN_001da314(&local_3c);
    *(undefined1 *)(iVar5 + 0x3a) = 0;
    *(undefined1 *)(iVar5 + 4) = *(undefined1 *)(param_2 + 0x34);
    (**(code **)(*param_1 + 0xcc))(param_1,iVar5);
  }
  else {
    iVar5 = FUN_001db8f8(param_1 + 0x4f,&local_48);
    *(undefined1 *)(iVar5 + 0x14) = *(undefined1 *)(param_2 + 0x7d);
    *(undefined1 *)(iVar5 + 0xc) = *(undefined1 *)(param_2 + 0x7c);
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_2 + 0x74);
    *(undefined2 *)(iVar5 + 0x20) = *(undefined2 *)(param_2 + 0x78);
    *(undefined2 *)(iVar5 + 0x22) = *(undefined2 *)(param_2 + 0x7a);
    uVar1 = (**(code **)(*param_1 + 0xdc))(param_1);
    *(undefined1 *)(iVar5 + 0x3a) = uVar1;
    *(undefined1 *)(iVar5 + 0x17) = 0xff;
    *(undefined1 *)(iVar5 + 4) = 1;
    (**(code **)(*param_1 + 0xcc))(param_1,iVar5);
    if (*(char *)(param_2 + 0x69) != '\0') {
      local_3f = 10;
      local_3c = local_48;
      local_44 = DAT_000a1918;
      local_40 = 1;
      (**(code **)(*param_1 + 0xcc))(param_1,&local_44);
    }
  }
  if (*(char *)(param_2 + 0x34) == '\0') {
    (**(code **)(*param_1 + 0xec))(param_1);
  }
  FUN_0009d5d8(param_1,param_2);
  return;
}

