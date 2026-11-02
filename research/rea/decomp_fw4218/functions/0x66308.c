// rea decompile_all
// name: FUN_00066308
// address: 0x66308
// body: available
// range: 0x66308-0x663bb inclusive
// range: 0x663d8-0x66413 inclusive
// range: 0x664dc-0x665b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00066308(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint local_88;
  byte local_84;
  uint local_70;
  byte local_6c;
  undefined1 auStack_28 [8];
  int *local_20;
  
  puVar2 = (undefined4 *)FUN_000b1210(auStack_28);
  *puVar2 = _DAT_000665b8;
  uVar3 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar3,s___AudioHWService_000665ba + 2,auStack_28);
  if (iVar4 != 0) {
    for (uVar7 = 0; uVar6 = (**(code **)(*local_20 + 0x68))(), uVar7 < uVar6; uVar7 = uVar7 + 1) {
      piVar5 = (int *)(**(code **)(*local_20 + 0x6c))(local_20,uVar7);
      if ((piVar5 != (int *)0x0) &&
         (*(char *)((int)piVar5 + 0x86) == '\x01' || *(char *)((int)piVar5 + 0x86) == '\x03')) {
        FUN_0011a234(&local_88);
        FUN_00003b88(&local_88,piVar5 + 8,0x60);
        if ((local_88 & 1) == 0) {
          uVar6 = FUN_001db588(param_2);
          local_88 = (uVar6 & 0xf) << 0x18 | local_88 & 0xf0ffffff;
          uVar6 = FUN_001db588(param_2);
          local_70 = (uVar6 & 0xf) << 0x18 | local_70 & 0xf0ffffff;
        }
        else {
          switch(param_2) {
          case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          default:
            FUN_00002898(DAT_000665d0,param_2);
            local_88 = local_88 & 0xffffff3f | 0x40;
            local_70 = CONCAT31(local_70._1_3_,(byte)local_70 & 0x3f | (byte)local_88 & 0xc0);
            local_6c = local_6c & 0x87 | local_84 & 0x78;
          }
        }
        cVar1 = (char)piVar5[7];
        if ((cVar1 == '\x01') ||
           ((cVar1 != '\x02' &&
            (((cVar1 != '\x03' && (cVar1 == '\x04')) ||
             (iVar4 = FUN_001ba1a8(piVar5 + 8,&local_88), iVar4 == 0)))))) {
          FUN_00003b88(piVar5 + 8,&local_88,0x60);
          (**(code **)(*piVar5 + 8))(piVar5);
        }
      }
    }
    FUN_000b1228(auStack_28);
    return 1;
  }
  FUN_00002898(DAT_000665cc);
  FUN_000b1228(auStack_28);
  return 0;
}

