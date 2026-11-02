// rea decompile_all
// name: FUN_00425cc9
// address: 0x425cc9
// body: available
// range: 0x425cc9-0x425d78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00425cc9(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  uVar1 = FUN_00411377();
  uVar5 = (uint)uVar1;
  if (local_8 == 0) {
    if ((*(ushort *)(param_1 + 0x108) < uVar5) || (0x102 < uVar5)) {
      local_8 = 3;
    }
    else {
      iVar2 = FUN_00411976(1,0,&local_8);
      if ((local_8 == 0) && (local_8 = FUN_004110b4(iVar2,uVar5), local_8 == 0)) {
        iVar4 = 0;
        if (uVar5 != 0) {
          do {
            iVar3 = *(char *)(iVar4 + iVar2) + iVar4;
            if ((iVar3 < 0) || ((int)uVar5 < iVar3)) {
              local_8 = 3;
              goto LAB_00425d63;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)uVar5);
        }
        *(ushort *)(param_1 + 0x278) = uVar1;
        *(int *)(param_1 + 0x27c) = iVar2;
        local_8 = 0;
      }
      else {
LAB_00425d63:
        FUN_00411a5c(iVar2);
      }
    }
  }
  return local_8;
}

