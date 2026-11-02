// rea decompile_all
// name: FUN_00044898
// address: 0x44898
// body: available
// range: 0x44898-0x44961 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00044898(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  bool bVar4;
  undefined1 local_60;
  undefined1 auStack_5f [63];
  int iStack_20;
  int local_1c;
  int iStack_18;
  
  iStack_20 = param_1;
  local_1c = param_2;
  iStack_18 = param_3;
  if (param_3 == DAT_00044964) {
    FUN_001e9694(param_1,param_2,0);
  }
  else if (param_3 == DAT_00044968) {
    pcVar3 = (char *)(param_1 + 0x2880);
    if (*(char *)(param_1 + 0x115) == '\0') {
      bVar4 = *(int *)(param_1 + 0x2888) != 0;
      *pcVar3 = bVar4;
      if (bVar4) {
        iVar1 = param_1 + DAT_00044970;
        local_60 = FUN_001eaf9c(auStack_5f,0x3e,DAT_00044974,*(undefined1 *)(iVar1 + 0x1c),
                                *(undefined1 *)(iVar1 + 0x1d),*(undefined1 *)(iVar1 + 0x1e),
                                *(undefined1 *)(iVar1 + 0x1f),param_1 + DAT_0004496c);
        FUN_001e8930(param_1,local_1c,&local_60,DAT_00044988,DAT_00044984,0,
                     **(undefined2 **)(param_1 + 0x2888),DAT_00044980,1,0,0,*DAT_0004497c,
                     DAT_00044978,0,0);
      }
      if (*DAT_0004498c != 0) {
        uVar2 = DAT_00044994;
        if (*pcVar3 != '\0') {
          uVar2 = DAT_00044990;
        }
        FUN_0002a1c6(2,DAT_00044998,*(undefined4 *)(local_1c + 0x700),uVar2);
        return;
      }
    }
    else {
      *pcVar3 = '\x03';
    }
    return;
  }
  return;
}

