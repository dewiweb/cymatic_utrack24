// rea decompile_all
// name: FUN_0040d706
// address: 0x40d706
// body: available
// range: 0x40d706-0x40d838 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040d706(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  size_t _Size;
  int unaff_ESI;
  int local_8;
  
  local_8 = 0;
  uVar5 = *(uint *)(unaff_ESI + 4);
  bVar1 = false;
  uVar2 = (int)*(short *)(unaff_ESI + 0x16) + *(short *)(unaff_ESI + 0x3a) + param_1;
  if (uVar5 < uVar2) {
    uVar2 = uVar2 + 7 & 0xfffffff8;
    if (uVar2 < 0x8000) {
      uVar3 = FUN_00411976(8,*(undefined4 *)(unaff_ESI + 0x18),&local_8);
      *(undefined4 *)(unaff_ESI + 0x18) = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
      uVar3 = FUN_00411976(1,*(undefined4 *)(unaff_ESI + 0x1c),&local_8);
      *(undefined4 *)(unaff_ESI + 0x1c) = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
      if (*(char *)(unaff_ESI + 0x10) != '\0') {
        iVar4 = FUN_00411976(8,*(undefined4 *)(unaff_ESI + 0x28),&local_8);
        *(int *)(unaff_ESI + 0x28) = iVar4;
        if (local_8 != 0) {
          return local_8;
        }
        _Size = uVar5 * 8;
        _memmove((void *)(iVar4 + uVar2 * 8),(void *)(_Size + iVar4),_Size);
        *(uint *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x28) + uVar2 * 8;
      }
      bVar1 = true;
      *(uint *)(unaff_ESI + 4) = uVar2;
      goto LAB_0040d7dd;
    }
LAB_0040d741:
    local_8 = 10;
  }
  else {
LAB_0040d7dd:
    uVar5 = (int)*(short *)(unaff_ESI + 0x14) + *(short *)(unaff_ESI + 0x38) + param_2;
    if (*(uint *)(unaff_ESI + 8) < uVar5) {
      uVar5 = uVar5 + 3 & 0xfffffffc;
      if (0x7fff < uVar5) goto LAB_0040d741;
      uVar3 = FUN_00411976(2,*(undefined4 *)(unaff_ESI + 0x20),&local_8);
      *(undefined4 *)(unaff_ESI + 0x20) = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
      bVar1 = true;
      *(uint *)(unaff_ESI + 8) = uVar5;
    }
    if (bVar1) {
      FUN_0040d673();
    }
  }
  return local_8;
}

