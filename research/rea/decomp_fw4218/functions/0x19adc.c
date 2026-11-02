// rea decompile_all
// name: FUN_00019adc
// address: 0x19adc
// body: available
// range: 0x18b28-0x18d23 inclusive
// range: 0x19adc-0x19c9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18bfc to 0x18ad4 FUN_00018ad4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x18c04 to 0x189a8 FUN_000189a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x18c60 to 0x18ad4 FUN_00018ad4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x18ccc to 0x18ad4 FUN_00018ad4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x18cd4 to 0x189a8 FUN_000189a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x18d20 to 0x189a8 FUN_000189a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00019adc(int param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0x314) == 0) {
    uVar2 = *(ushort *)(*(int *)(param_1 + 0x4c8) + 0x16);
    uVar4 = (uint)uVar2;
    if ((uVar2 & 0x40) != 0) {
      uVar4 = uVar4 & 0xffffffbf;
      iVar5 = *(int *)(param_1 + 0x4c8);
      *(char *)(iVar5 + 0x16) = (char)uVar4;
      *(char *)(iVar5 + 0x17) = (char)(uVar2 >> 8);
    }
    piVar7 = (int *)(param_1 + 0x464);
    if ((uVar4 & 0xffff0105) == 1) {
      iVar5 = param_1 + param_2 * 0x24;
      if ((uVar4 & 8) != 0) {
        if (*(char *)(iVar5 + 0xd7) != '\x01') {
          *piVar7 = *(int *)(param_1 + 0x464) + 1;
          *(byte *)(*(int *)(param_1 + 0x4c8) + 0x16) =
               *(byte *)(*(int *)(param_1 + 0x4c8) + 0x16) & 0xfe;
          return;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
      }
      if (*(code **)(iVar5 + 0xf0) == entry) {
        *(byte *)(*(int *)(param_1 + 0x4c8) + 0x16) =
             *(byte *)(*(int *)(param_1 + 0x4c8) + 0x16) & 0xfe;
      }
      else {
        (**(code **)(iVar5 + 0xf0))(param_2,6,*(undefined4 *)(iVar5 + 0xec));
      }
      *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + 1;
      return;
    }
    uVar1 = (undefined1)(uVar4 >> 8);
    if ((int)(uVar4 << 0x17) < 0) {
      iVar5 = *(int *)(param_1 + 0x4c8);
      *(byte *)(iVar5 + 0x16) = (byte)uVar4 & 0xfe;
      *(undefined1 *)(iVar5 + 0x17) = uVar1;
      *piVar7 = *(int *)(param_1 + 0x464) + 1;
      return;
    }
    if ((uVar4 & 4) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x4c8);
    *(byte *)(iVar5 + 0x16) = (byte)uVar4 & 0xfa;
    *(undefined1 *)(iVar5 + 0x17) = uVar1;
    *piVar7 = *(int *)(param_1 + 0x464) + 1;
    return;
  }
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x4c8) + 0x16);
  piVar7 = (int *)(param_1 + 0x464);
  uVar1 = (undefined1)(uVar2 >> 8);
  bVar3 = (byte)uVar2;
  if ((int)((uint)uVar2 << 0x17) < 0) {
    iVar5 = *(int *)(param_1 + 0x4c8);
    *(byte *)(iVar5 + 0x16) = bVar3 & 0xfe;
    *(undefined1 *)(iVar5 + 0x17) = uVar1;
    *piVar7 = *(int *)(param_1 + 0x464) + 1;
    return;
  }
  iVar5 = param_1 + param_2 * 0x24;
  if ((uVar2 & 0x40) != 0) {
    iVar6 = *(int *)(param_1 + 0x4c8);
    *(byte *)(iVar6 + 0x16) = bVar3 & 0xbf | 0x80;
    *(undefined1 *)(iVar6 + 0x17) = uVar1;
    if (*(char *)(iVar5 + 0xe8) != '\0') {
      FUN_00018ad4();
      return;
    }
    FUN_000189a8(param_1,param_2,7);
    return;
  }
  if ((uVar2 & 8) != 0) {
    iVar6 = *(int *)(param_1 + 0x4c8);
    *(byte *)(iVar6 + 0x16) = bVar3 & 0xf6;
    *(undefined1 *)(iVar6 + 0x17) = uVar1;
    *piVar7 = *(int *)(param_1 + 0x464) + 1;
    if (*(char *)(iVar5 + 0xe8) != '\0') {
      FUN_00018ad4();
      return;
    }
    FUN_000189a8(param_1,param_2,8);
    *(undefined1 *)(param_1 + 0x5f4) = 1;
    return;
  }
  if ((uVar2 & 4) != 0) {
    iVar6 = *(int *)(param_1 + 0x4c8);
    *(byte *)(iVar6 + 0x16) = bVar3 & 0xfa;
    *(undefined1 *)(iVar6 + 0x17) = uVar1;
    *piVar7 = *(int *)(param_1 + 0x464) + 1;
    if (*(char *)(iVar5 + 0xe8) != '\0') {
      FUN_00018ad4();
      return;
    }
    FUN_000189a8(param_1,param_2,9);
    return;
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(iVar5 + 0xe8) != '\0') {
    FUN_00018ad4(param_1,param_2,9);
    *(int *)(param_1 + 0x458) = param_2;
    *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + 1;
    return;
  }
  FUN_000189a8(param_1,param_2,6);
  return;
}

