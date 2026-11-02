// rea decompile_all
// name: FUN_0005eb18
// address: 0x5eb18
// body: available
// range: 0x5eb18-0x5ec47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005eb18(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  ushort local_40 [2];
  undefined4 local_3c;
  ushort local_38 [2];
  int *piStack_34;
  undefined4 local_30;
  int iStack_2c;
  uint uStack_28;
  
  piStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  if (2 < param_4) {
    local_40[0] = 0;
    uVar2 = param_4 - 2;
    FUN_000777e0(local_38,param_3,local_40);
    if ((local_38[0] & 7) != 0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      local_3c = 0;
      if ((local_38[0] & 1) != 0) {
        if (uVar2 == 0) goto LAB_0005ebf8;
        uVar1 = (uint)local_40[0];
        uVar6 = 1;
        uVar2 = param_4 - 3;
        local_40[0] = local_40[0] + 1;
        uVar7 = 0;
        if (*(char *)(param_3 + uVar1) != '\0') {
          uVar7 = 1;
        }
      }
      if ((local_38[0] & 2) != 0) {
        if (uVar2 == 0) goto LAB_0005ebf8;
        uVar3 = 1;
        uVar2 = uVar2 - 1;
        uVar4 = *(undefined1 *)(param_3 + (uint)local_40[0]);
        local_40[0] = local_40[0] + 1;
      }
      if ((local_38[0] & 4) != 0) {
        if (uVar2 < 4) goto LAB_0005ebf8;
        uVar5 = 1;
        uVar2 = uVar2 - 4;
        FUN_00077824(&local_3c,param_3,local_40);
      }
      if (uVar2 == 0) {
        (**(code **)(*(int *)param_1[1] + 0x114))
                  ((int *)param_1[1],local_30,uVar6,uVar7,uVar3,uVar4,uVar5,local_3c);
        return;
      }
    }
  }
LAB_0005ebf8:
                    /* WARNING: Could not recover jumptable at 0x0005ec14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,local_30,6);
  return;
}

