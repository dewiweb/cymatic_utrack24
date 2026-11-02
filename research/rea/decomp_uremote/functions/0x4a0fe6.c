// rea decompile_all
// name: FUN_004a0fe6
// address: 0x4a0fe6
// body: available
// range: 0x4a0fe6-0x4a10dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a0fe6(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int *in_ECX;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_3c [24];
  int local_24;
  undefined1 local_20 [4];
  int local_1c;
  char local_15;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x4a0ff2;
  piVar1 = (int *)*param_1;
  (**(code **)(*piVar1 + 0x6c))();
  FUN_0049f50b();
  local_8 = 0;
  local_15 = '\0';
  local_1c = 0;
  if (0 < in_ECX[2]) {
    local_24 = 0;
    do {
      iVar3 = *in_ECX + local_24;
      cVar2 = FUN_0049f9e1();
      if (cVar2 != '\0') {
        FUN_004a0f1a(param_1,param_2);
      }
      if (*(char *)(iVar3 + 0x18) == '\0') {
        cVar2 = FUN_0049f620();
        if (cVar2 != '\0') {
          FUN_0049f5e8();
          if (local_15 == '\0') {
            local_15 = '\x01';
            (**(code **)(*piVar1 + 0x34))();
          }
          (**(code **)(*piVar1 + 0x68))(local_20);
        }
        puVar5 = local_3c;
        FUN_00477188(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),puVar5);
        uVar4 = FUN_00477099(puVar5);
        (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0x70))(*(undefined4 *)(iVar3 + 8),(int)uVar4)
        ;
      }
      local_1c = local_1c + 1;
      local_24 = local_24 + 0x1c;
    } while (local_1c < in_ECX[2]);
    if (local_15 != '\0') {
      (**(code **)(*piVar1 + 0x38))();
    }
  }
  FUN_004c4d7a();
  return;
}

