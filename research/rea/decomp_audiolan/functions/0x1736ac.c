// rea decompile_all
// name: FUN_001736ac
// address: 0x1736ac
// body: available
// range: 0x1736ac-0x173861 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001736ac(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_b8 [68];
  char local_74 [68];
  int local_30;
  undefined1 local_2c [16];
  int *local_1c;
  
  if (*param_1 < 1) {
    return 0xfffffff6;
  }
  if (param_2 != 0) {
    local_74[0] = '\0';
    local_2c[0] = 0;
    if ((code *)param_1[0x17] != entry) {
      (*(code *)param_1[0x17])(param_1,local_74,0x41,local_2c,10);
    }
    iVar1 = FUN_001a4bdc(param_2 + 0xb0,0);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      if (param_3 == 0) {
        iVar1 = *(int *)(param_2 + 0x7c);
      }
      else {
        iVar1 = *(int *)(param_3 + 0xac);
      }
      if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 4), iVar3 != 0)) {
        FUN_000038a0(local_b8,0x44);
        local_1c = param_1 + 0x1e;
        if (*(int *)(iVar3 + 4) == 0) {
          iVar3 = FUN_000034d0(local_1c);
          iVar3 = iVar3 + 0x7a;
        }
        else {
          iVar3 = FUN_000034d0();
          iVar2 = FUN_000034d0(local_1c);
          iVar3 = iVar3 * 3 + iVar2 + 0x7b;
        }
        if ((code *)*DAT_00173864 == entry) {
          local_30 = FUN_0019b388(iVar3 + 1);
        }
        else {
          local_30 = (*(code *)*DAT_00173864)(iVar3 + 1);
        }
        if (local_30 != 0) {
          if (local_74[0] != '\0') {
            FUN_000037d0(local_b8,local_74,0x44);
          }
          if ((local_b8[0] == '\0') &&
             (FUN_00175564(param_1,param_1[0xb],local_b8,0x31), local_b8[0] == '\0')) {
            if ((code *)*DAT_00173878 != entry) {
              (*(code *)*DAT_00173878)();
              return 0xfffffff6;
            }
            FUN_0018a280(local_30);
            return 0xfffffff6;
          }
          if (*(int *)(*(int *)(iVar1 + 4) + 4) == 0) {
            iVar1 = FUN_000034d0(local_1c);
            FUN_000027f4(local_30,(iVar3 - iVar1) + -10,s_<sip:_s:_s>_0017387c,local_b8,local_2c);
          }
          else {
            iVar1 = FUN_0016f8cc();
            FUN_000027f4(local_30,iVar3,s_<sip:_s__s:_s>_00173868,iVar1,local_b8,local_2c);
            if (iVar1 != 0) {
              if ((code *)*DAT_00173878 == entry) {
                FUN_0018a280(iVar1);
              }
              else {
                (*(code *)*DAT_00173878)(iVar1);
              }
            }
          }
          iVar1 = FUN_001a6f04(local_1c,&DAT_00173888);
          if (iVar1 != 0) {
            iVar1 = FUN_000034d0(local_30);
            *(undefined1 *)(iVar1 + local_30 + -1) = 0;
            FUN_00003604(local_30,s__transport__0017388c);
            FUN_00003604(local_30,local_1c);
            FUN_00003604(local_30,&DAT_00173898);
          }
          FUN_001a5d38(param_2,local_30);
          if ((code *)*DAT_00173878 == entry) {
            FUN_0018a280(local_30);
          }
          else {
            (*(code *)*DAT_00173878)();
          }
          return 0;
        }
        return 0xfffffffc;
      }
    }
    return 0xfffffffb;
  }
  return 0xfffffffe;
}

