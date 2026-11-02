// rea decompile_all
// name: FUN_00414e5b
// address: 0x414e5b
// body: available
// range: 0x414e5b-0x414f99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00414e5b(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar1 = param_2;
  local_8 = FUN_00414ae9(*(undefined4 *)(param_2 + 0xbc),4,&local_10,&local_c);
  if ((local_8 == 0) && (local_10 = FUN_004114f7(), local_8 == 0)) {
    uVar4 = local_10 & 0xffffff00;
    if ((uVar4 == 0) || (uVar4 == 0x100)) {
      if (uVar4 == 0) {
        if ((local_10 & 4) == 0) {
          uVar2 = FUN_004114f7();
        }
        else {
          uVar2 = FUN_0041148f();
        }
      }
      else {
        if ((local_10 & 4) == 0) {
          uVar2 = FUN_004113d4();
        }
        else {
          uVar2 = FUN_00411377();
        }
        uVar2 = uVar2 & 0xffff;
      }
      if (local_8 == 0) {
        *(uint *)(param_2 + 0x120) = uVar2;
        if (uVar2 != 0) {
          if (uVar4 == 0) {
            uVar4 = 0xc;
          }
          else {
            uVar4 = 5;
          }
          if (uVar2 <= local_c / uVar4) {
            iVar3 = FUN_00411976(0x10,0,&local_8);
            *(int *)(param_2 + 0x124) = iVar3;
            if (local_8 != 0) {
              return 0x40;
            }
            param_2 = 0;
            if (uVar2 == 0) {
              return 0;
            }
            do {
              local_8 = FUN_00414a5b(param_1,local_10);
              *(undefined4 *)(iVar3 + 0xc) = 0;
              if (local_8 != 0) {
                FUN_00411a5c(*(undefined4 *)(iVar1 + 0x124));
                *(undefined4 *)(iVar1 + 0x124) = 0;
                return local_8;
              }
              param_2 = param_2 + 1;
              iVar3 = iVar3 + 0x10;
              local_8 = 0;
            } while (param_2 < uVar2);
            return 0;
          }
        }
        return 8;
      }
    }
    local_8 = 3;
  }
  return local_8;
}

