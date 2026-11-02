// rea decompile_all
// name: FUN_000b87ac
// address: 0xb87ac
// body: available
// range: 0xb87ac-0xb88bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b87ac(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_48;
  int *local_44;
  code *pcStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 local_34 [8];
  
  if (param_2 == 0) {
    uVar4 = *(undefined4 *)(DAT_000b88bc + 0x28);
    uVar6 = *(undefined4 *)(DAT_000b88bc + 0x2c);
    puVar2 = (undefined4 *)FUN_001a0808(0x10,1);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = DAT_000b88e0;
      puVar2[1] = param_1;
      puVar2[2] = uVar4;
      puVar2[3] = uVar6;
    }
                    /* WARNING: Could not recover jumptable at 0x000b88b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c))(param_1,puVar2,0xffffffff);
    return;
  }
  pcVar3 = *(code **)(DAT_000b88bc + 0x20);
  uVar5 = *(uint *)(DAT_000b88bc + 0x24);
  piVar1 = (int *)FUN_0017b3e4();
  uVar6 = _DAT_000b88c4;
  uVar4 = DAT_000b88c0;
  if (piVar1 == param_1 + 1) {
    if ((uVar5 & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(int *)((int)param_1 + ((int)uVar5 >> 1)));
    }
    (*pcVar3)();
    return;
  }
  local_48 = DAT_000b88c0;
  local_38 = _DAT_000b88c4;
  local_34[0] = 0;
  local_44 = param_1;
  pcStack_40 = pcVar3;
  uStack_3c = uVar5;
  FUN_0017a1c4(local_34,s_C__WaitingResultCallback_000b88c5 + 3,0,0);
  thunk_EXT_FUN_00400100(local_34);
  (**(code **)(*param_1 + 0x2c))(param_1,&local_48,0xffffffff);
  thunk_EXT_FUN_004001ec(local_34,0xffffffff);
  local_38 = uVar6;
  local_48 = uVar4;
  FUN_0017a254(local_34);
  return;
}

