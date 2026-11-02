// rea decompile_all
// name: FUN_0040e505
// address: 0x40e505
// body: available
// range: 0x40e505-0x40e631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0040e62a) */

int FUN_0040e505(int param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_EBX;
  int local_10;
  int local_c;
  int local_8;
  
  *unaff_EBX = 0;
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = FUN_0041148f();
  if (local_8 == 0) {
    if (iVar1 == 0x74797031) {
      uVar2 = FUN_00411377();
      local_8 = FUN_00411095(6);
      if (local_8 == 0) {
        local_c = -1;
        local_10 = 0;
        *param_3 = 0;
        if ((uVar2 & 0xffff) != 0) {
          do {
            iVar1 = FUN_0041148f();
            iVar3 = FUN_00411095(4);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = FUN_0041148f();
            *unaff_EBX = iVar3;
            iVar3 = FUN_0041148f();
            *param_2 = iVar3;
            if (iVar1 == 0x43494420) {
              *unaff_EBX = *unaff_EBX + 0x16;
              *param_2 = iVar3 + -0x16;
              *param_3 = 1;
LAB_0040e602:
              local_c = local_c + 1;
              if (param_1 < 0) {
                return 0;
              }
            }
            else if (iVar1 == 0x54595031) {
              *unaff_EBX = *unaff_EBX + 0x18;
              *param_2 = iVar3 + -0x18;
              *param_3 = 0;
              goto LAB_0040e602;
            }
            if ((-1 < param_1) && (local_c == param_1)) {
              return 0;
            }
            local_10 = local_10 + 1;
          } while (local_10 < (int)(uVar2 & 0xffff));
        }
        local_8 = 0x8e;
      }
    }
    else {
      local_8 = 2;
    }
  }
  return local_8;
}

