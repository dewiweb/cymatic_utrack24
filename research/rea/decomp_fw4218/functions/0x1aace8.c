// rea decompile_all
// name: FUN_001aace8
// address: 0x1aace8
// body: available
// range: 0x1aace8-0x1aadfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001aace8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  char local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  undefined4 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puStack_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  FUN_00201f28(auStack_28,0);
  uVar1 = _DAT_001aae00;
  local_3c = 0;
  local_40 = _DAT_001aae00;
  local_38 = 0;
  local_34 = '\0';
  FUN_00201f54(auStack_28);
  uVar5 = 0x80;
  iVar6 = 0;
  local_30 = local_18;
  do {
    iVar6 = iVar6 + 1;
    if (uVar5 == 0) {
      local_34 = '\0';
      iVar2 = FUN_000d6154(&local_3c,local_38 + 1);
LAB_001aad3a:
      if (iVar2 == 0) {
        FUN_00002898(_DAT_001aae30,uVar5);
        goto LAB_001aadae;
      }
    }
    else {
      uVar3 = uVar5;
      if (uVar5 <= local_38) {
        uVar3 = local_38 + 1;
      }
      if (local_34 == '\0') {
        local_34 = '\x01';
        iVar2 = FUN_000d6154(&local_3c);
        goto LAB_001aad3a;
      }
      uVar4 = 0;
      if (local_3c != 0) {
        uVar4 = *(uint *)(local_3c + 4);
      }
      if (uVar4 < uVar3) {
        iVar2 = FUN_000d6154(&local_3c);
        goto LAB_001aad3a;
      }
    }
    iVar2 = local_3c;
    if (local_3c != 0) {
      iVar2 = local_3c + 8;
    }
    iVar2 = FUN_00002858(iVar2,uVar5,local_1c,local_30);
    if (2 < iVar6) {
      FUN_00002898(s_1__ERROR__BCOString__vformat_iLo_001aae01 + 3,iVar6);
LAB_001aadae:
      local_2c = 0;
      local_30 = 0;
      param_1[1] = 0;
      *param_1 = uVar1;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      FUN_001ab124(param_1,&DAT_001aae2c);
      FUN_00201f54(&local_30);
      FUN_001aafac(&local_40);
      return;
    }
    if (iVar2 < 0) {
      FUN_00002898(s____ERROR__BCOString__vformat_ret_001aae31 + 3);
      goto LAB_001aadae;
    }
    if (iVar2 < (int)uVar5) {
      local_34 = 0;
      local_38 = iVar2;
      FUN_000d6154(&local_3c,iVar2 + 1);
      *param_1 = uVar1;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      FUN_001ab1a2(param_1,&local_40);
      FUN_001aafac(&local_40);
      return;
    }
    uVar5 = iVar2 + 1;
  } while( true );
}

