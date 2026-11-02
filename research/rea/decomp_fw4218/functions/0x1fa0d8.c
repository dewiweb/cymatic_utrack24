// rea decompile_all
// name: FUN_001fa0d8
// address: 0x1fa0d8
// body: available
// range: 0x1fa0d8-0x1fa18b inclusive
// range: 0x1fa194-0x1fa23b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fa110 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001fa0d8(int param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = DAT_001fa23c;
  cVar1 = *(char *)(param_1 + 0x18);
  if (((param_2 != 0) && ((cVar1 == '\x04' || (cVar1 == '\a')))) &&
     ((*(int *)(param_1 + 0x78) != 0 || (*(ushort *)(param_1 + 0x2c) != DAT_001fa240)))) {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x1e) << 0x1b)) {
      FUN_00013290(s_Assertion___s__failed_at_line__d_001fa264,
                   s___pcb_>flags___TF_RXCLOSED_001fa246 + 2,0xb2,_DAT_001fa244);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    FUN_001fce48(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x28),param_1,param_1 + 4
                 ,*(undefined2 *)(param_1 + 0x1a),*(undefined2 *)(param_1 + 0x1c));
    FUN_001fb77c(param_1);
    iVar4 = *(int *)(puVar2 + 0x18);
    if (iVar4 == param_1) {
      *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)(iVar4 + 0xc);
    }
    else {
      *(int *)(puVar2 + 0x20) = iVar4;
      while (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 == param_1) {
          *(undefined4 *)(*(int *)(puVar2 + 0x20) + 0xc) = *(undefined4 *)(param_1 + 0xc);
          break;
        }
        *(int *)(puVar2 + 0x20) = iVar4;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *puVar2 = 1;
    if (*(char *)(param_1 + 0x18) == '\x04') {
      *(undefined1 *)(param_1 + 0x18) = 10;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar2 + 0x1c);
      *(int *)(puVar2 + 0x1c) = param_1;
      FUN_001fd6c8();
    }
    else {
      FUN_001ecfbc(2,param_1);
    }
    return 0;
  }
  switch(cVar1) {
  case '\0':
    if (*(short *)(param_1 + 0x1a) != 0) {
      iVar4 = *(int *)(DAT_001fa23c + 0x10);
      if (iVar4 == param_1) {
        *(undefined4 *)(DAT_001fa23c + 0x10) = *(undefined4 *)(iVar4 + 0xc);
      }
      else {
        *(int *)(DAT_001fa23c + 0x20) = iVar4;
        while (iVar4 != 0) {
          iVar4 = *(int *)(iVar4 + 0xc);
          if (iVar4 == param_1) {
            *(undefined4 *)(*(int *)(puVar2 + 0x20) + 0xc) = *(undefined4 *)(param_1 + 0xc);
            break;
          }
          *(int *)(puVar2 + 0x20) = iVar4;
        }
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    uVar5 = 2;
    goto LAB_001fa1ca;
  case '\x01':
    FUN_001fb8e4(DAT_001fa298,param_1);
    uVar5 = 3;
LAB_001fa1ca:
    FUN_001ecfbc(uVar5,param_1);
    return 0;
  case '\x02':
    FUN_001fb8e4(DAT_001fa29c,param_1);
    *puVar2 = 1;
    FUN_001ecfbc(2,param_1);
    return 0;
  case '\x03':
    iVar4 = FUN_001fd07e(param_1);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 5;
    }
    goto LAB_001fa222;
  case '\x04':
    iVar4 = FUN_001fd07e(param_1);
    if (iVar4 != 0) goto LAB_001fa222;
    uVar3 = 5;
    break;
  default:
    return 0;
  case '\a':
    iVar4 = FUN_001fd07e(param_1);
    if (iVar4 != 0) goto LAB_001fa222;
    uVar3 = 9;
  }
  *(undefined1 *)(param_1 + 0x18) = uVar3;
LAB_001fa222:
  if ((param_1 != 0) && (iVar4 == 0)) {
    FUN_001fb0ac(param_1);
  }
  return iVar4;
}

