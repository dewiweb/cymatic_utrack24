// rea decompile_all
// name: FUN_000d98fc
// address: 0xd98fc
// body: available
// range: 0xd98fc-0xd9a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000d9a54) */

undefined4 FUN_000d98fc(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_58 [4];
  undefined1 *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_20;
  undefined4 local_1c;
  int *piStack_18;
  
  uVar1 = DAT_000d9a94;
  iVar3 = 0;
  if (*param_3 != 0) {
    uStack_20 = param_1;
    local_1c = param_2;
    piStack_18 = param_3;
    FUN_001a0700(DAT_000d9a94);
    local_58[0] = (**(code **)(*(int *)*param_3 + 0x10))();
    FUN_001a0d18(uVar1);
    if (0 < local_58[0]) {
      do {
        uVar1 = DAT_000d9a94;
        if (*param_3 == 0) {
          return 0;
        }
        FUN_001a0700(DAT_000d9a94);
        iVar2 = (**(code **)(*(int *)*param_3 + 0x10))();
        if ((iVar2 <= iVar3) || (iVar3 < 0)) {
          FUN_001a0d18(uVar1);
          return 0;
        }
        param_3[1] = iVar3;
        FUN_001a0d18(uVar1);
        local_30 = 0;
        local_2c = 0;
        FUN_0014f7b8(local_58,&local_30);
        FUN_001b98a8(&local_30);
        uVar1 = DAT_000d9a94;
        if (*param_3 == 0) {
          local_48 = (undefined1 *)local_58;
          FUN_0014f588(local_58);
LAB_000d9a42:
          FUN_0014f868(local_58);
          return 0;
        }
        local_48 = (undefined1 *)local_58;
        FUN_001a0700(DAT_000d9a94);
        local_48 = (undefined1 *)
                   (**(code **)(*(int *)*param_3 + 0x14))((int *)*param_3,param_3[1],local_48);
        FUN_001a0d18(uVar1);
        if (local_48 == (undefined1 *)0x0) goto LAB_000d9a42;
        iVar2 = FUN_00160a14(local_58,local_1c);
        uVar1 = DAT_000d9a94;
        if (iVar2 != 0) {
          if (*param_3 != 0) {
            FUN_001a0700(DAT_000d9a94);
            iVar3 = (**(code **)(*(int *)*param_3 + 0x40))((int *)*param_3,param_3[1]);
            if (iVar3 != 0) {
              local_40 = uVar1;
              local_44 = iVar3;
              FUN_001a0700(uVar1);
              *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + 1;
              FUN_001a0d18(local_40);
              FUN_000b6094(*param_3);
              *param_3 = iVar3;
            }
            FUN_001a0d18(uVar1);
          }
          FUN_0014f868(local_58);
          return 1;
        }
        FUN_0014f868(local_58);
        uVar1 = DAT_000d9a94;
        iVar3 = iVar3 + 1;
        iVar2 = 0;
        if (*param_3 != 0) {
          FUN_001a0700(DAT_000d9a94);
          local_58[0] = (**(code **)(*(int *)*param_3 + 0x10))();
          FUN_001a0d18(uVar1);
          iVar2 = local_58[0];
        }
      } while (iVar3 < iVar2);
    }
  }
  return 0;
}

