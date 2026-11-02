// rea decompile_all
// name: FUN_0019fce4
// address: 0x19fce4
// body: available
// range: 0x19fce4-0x19ff9b inclusive
// range: 0x1a0078-0x1a009f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_0019fce4(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  int in_stack_00000000;
  
  if ((uint)param_1[0x5d] <= (uint)(in_stack_00000000 - param_1[0x5c])) {
    piVar3 = param_1 + 0x163;
    param_1[0x5c] = in_stack_00000000;
    FUN_001856fc(piVar3,in_stack_00000000);
    iVar4 = FUN_00185d34(piVar3,in_stack_00000000);
    if (iVar4 == 0) {
      iVar4 = FUN_001a269c(param_1 + 0x128,in_stack_00000000);
      if (iVar4 != 0) {
        param_1[0x5d] = 5;
      }
      FUN_001809c4(param_1 + 0x196,in_stack_00000000);
      iVar4 = (**(code **)(*param_1 + 0x108))(param_1);
      if (iVar4 != 0) {
        FUN_00193968(param_1 + 0x1aa,in_stack_00000000);
      }
      iVar4 = (**(code **)(*param_1 + 0x108))(param_1);
      uVar2 = DAT_001a00a0;
      if ((iVar4 != 0) && (700 < (uint)(in_stack_00000000 - param_1[0x5f]))) {
        param_1[0x5f] = in_stack_00000000;
        uVar5 = (uint)*(ushort *)(param_1 + 100);
        if ((uVar5 != 0) && (*(int *)param_1[99] != 0)) {
          (**(code **)(*param_1 + 0x164))(param_1,DAT_001a00a4,(short)param_1[0x65],0,0,0,0,uVar2);
          uVar5 = extraout_r1;
        }
        cVar1 = (char)param_1[0x77];
        if (*(char *)((int)param_1 + 0x1dd) == '\0') {
          if (cVar1 != '\0') {
            uVar5 = (uint)*(byte *)((int)param_1 + 0x1de);
          }
          if ((cVar1 != '\0' && uVar5 != 0) &&
             (*(char *)((int)param_1 + 0x1de) = (char)(uVar5 - 1), (uVar5 - 1 & 0xff) == 0)) {
            *(undefined1 *)(param_1 + 0x77) = 0;
            FUN_0019457c(param_1 + 0x21f,1,*(int *)(*param_1 + -0xc) + (int)param_1);
          }
        }
        else if (cVar1 == '\x01') {
          (**(code **)(*param_1 + 0x164))(param_1,DAT_001a00a8,0,0,0,0,0,uVar2);
        }
        else if (cVar1 == '\x02') {
          (**(code **)(*param_1 + 0x164))(param_1,DAT_001a00ac,0,0,0,0,0,uVar2);
        }
      }
      FUN_001919dc(param_1 + 0x19f,in_stack_00000000);
      iVar4 = (**(code **)(*param_1 + 0x108))(param_1);
      if ((iVar4 != 0) && (iVar4 = FUN_001911d8(param_1 + 0x225,in_stack_00000000), iVar4 != 0)) {
        FUN_0019457c(param_1 + 0x21f,1,*(int *)(*param_1 + -0xc) + (int)param_1,4,uVar2);
      }
      FUN_00185924(piVar3,in_stack_00000000);
      FUN_0019f3f0(param_1 + 0x174,in_stack_00000000);
      if ((int *)param_1[0x68] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x68] + 8))();
      }
      switch((char)param_1[0x71]) {
      case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case '\x01':
      case '\x03':
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case '\x02':
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      uVar5 = param_1[0x5d];
      if (5 < uVar5) {
        uVar5 = 5;
      }
      param_1[0x5d] = uVar5;
    }
  }
  FUN_0014c508(param_1 + 0x121,in_stack_00000000);
  uVar5 = param_1[0x5d];
  if (100 < uVar5) {
    uVar5 = 100;
  }
  param_1[0x5d] = uVar5;
  return;
}

